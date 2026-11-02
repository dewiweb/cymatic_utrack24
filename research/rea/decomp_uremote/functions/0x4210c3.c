// rea decompile_all
// name: FUN_004210c3
// address: 0x4210c3
// body: available
// range: 0x4210c3-0x421262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004210c3(int *param_1,uint *param_2,char param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *param_2;
  uVar2 = CONCAT11(*(undefined1 *)(param_1[4] + 6),*(undefined1 *)(param_1[4] + 7));
  uVar8 = uVar2 & 0xfffffffe;
  uVar3 = 0;
  uVar9 = (uint)(uVar2 >> 1);
  local_10 = 0;
  if (uVar9 != 0) {
    if (param_3 != '\0') {
      local_8 = local_8 + 1;
    }
    if (local_8 < 0x10000) {
      do {
        local_c = 0;
        pcVar5 = (char *)(param_1[4] + 0xe);
        puVar6 = (undefined1 *)(param_1[4] + 0x10 + uVar8);
        if (uVar9 != 0) {
          do {
            pcVar4 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 2;
            uVar10 = (uint)CONCAT11(*puVar6,puVar6[1]);
            if ((uVar10 <= local_8) && (local_8 <= CONCAT11(cVar1,*pcVar4))) {
              pcVar5 = puVar6 + uVar8;
              uVar11 = (int)(short)((short)*pcVar5 << 8) | (uint)(byte)pcVar5[1];
              pcVar5 = pcVar5 + uVar8;
              uVar7 = (uint)CONCAT11(*pcVar5,pcVar5[1]);
              if ((uVar9 - 1 <= local_c) &&
                 ((((uVar10 == 0xffff && (CONCAT11(cVar1,*pcVar4) == 0xffff)) && (uVar7 != 0)) &&
                  ((char *)(*(int *)(*param_1 + 0x1f8) + *(int *)(*param_1 + 500)) <
                   pcVar5 + uVar7 + 2)))) {
                uVar11 = 1;
                uVar7 = 0;
              }
              uVar3 = local_10;
              if (uVar7 != 0xffff) {
                uVar3 = local_8;
                if ((uVar7 == 0) ||
                   (uVar3 = (uint)CONCAT11(pcVar5[uVar7 + (local_8 - uVar10) * 2],
                                           (pcVar5 + uVar7 + (local_8 - uVar10) * 2)[1]),
                   local_10 = uVar3, uVar3 != 0)) {
                  uVar3 = uVar3 + uVar11 & 0xffff;
                  local_10 = uVar3;
                }
                break;
              }
            }
            local_c = local_c + 1;
            puVar6 = puVar6 + 2;
          } while (local_c < uVar9);
        }
        if (param_3 == '\0') {
          return;
        }
      } while ((uVar3 == 0) && (local_8 = local_8 + 1, local_8 < 0x10000));
    }
    if ((param_3 != '\0') && (uVar3 != 0)) {
      *param_2 = local_8;
    }
  }
  return;
}

