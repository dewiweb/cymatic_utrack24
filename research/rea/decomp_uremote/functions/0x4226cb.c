// rea decompile_all
// name: FUN_004226cb
// address: 0x4226cb
// body: available
// range: 0x4226cb-0x422818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004226cb(int param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0xc),*(undefined1 *)(iVar2 + 0xd)),
                            *(undefined1 *)(iVar2 + 0xe)),*(undefined1 *)(iVar2 + 0xf));
  local_c = *param_2;
  if (uVar4 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    if (param_3 != '\0') {
      local_c = local_c + 1;
    }
    local_10 = 0;
    local_14 = uVar4;
    local_8 = uVar4;
    if (uVar4 != 0) {
      do {
        local_8 = local_14 + local_10 >> 1;
        puVar1 = (undefined1 *)(local_8 * 0xc + 0x14 + iVar2);
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
        uVar3 = local_8;
        if (CONCAT31(CONCAT21(CONCAT11(puVar1[-4],puVar1[-3]),puVar1[-2]),puVar1[-1]) <= local_c) {
          if (local_c <= uVar6) {
            iVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
            goto LAB_004227c7;
          }
          local_10 = local_8 + 1;
          uVar3 = local_14;
        }
        local_14 = uVar3;
      } while (local_10 < local_14);
      iVar5 = 0;
    }
LAB_004227c7:
    if (param_3 != '\0') {
      if ((uVar6 < local_c) && (local_8 = local_8 + 1, local_8 == uVar4)) {
        iVar5 = 0;
      }
      else {
        *(uint *)(param_1 + 0x1c) = local_c;
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(uint *)(param_1 + 0x24) = local_8;
        if (iVar5 == 0) {
          FUN_00422605();
          if (*(char *)(param_1 + 0x18) == '\0') {
            return 0;
          }
          iVar5 = *(int *)(param_1 + 0x20);
        }
        else {
          *(int *)(param_1 + 0x20) = iVar5;
        }
        if (iVar5 != 0) {
          *param_2 = *(uint *)(param_1 + 0x1c);
        }
      }
    }
  }
  return iVar5;
}

