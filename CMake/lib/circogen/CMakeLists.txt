add_library(${LIB_CIRCOGEN}
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/block.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/blockpath.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/blocktree.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/circpos.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/circular.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/circularinit.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/deglist.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/edgelist.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/nodelist.c
    ${GRAPHVIZ_SRC_DIR}/lib/circogen/nodeset.c
    #${GRAPHVIZ_SRC_DIR}/lib/circogen/stack.c
)

target_link_libraries(${LIB_CIRCOGEN} 
    ${LIB_COMMON}
    ${LIB_GRAPH}
    ${LIB_NEATOGEN}
    ${LIB_PACK}
)
