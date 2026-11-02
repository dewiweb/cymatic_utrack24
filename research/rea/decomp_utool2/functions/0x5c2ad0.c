// rea decompile_all
// name: FUN_005c2ad0
// address: 0x5c2ad0
// body: available
// range: 0x5c2ad0-0x5c2c5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2ad0(uint param_1,char param_2,char param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  
  puVar5 = *(uint **)(in_ECX + 0x28);
  puVar2 = puVar5 + *(int *)(in_ECX + 0x30) * 4;
  for (; puVar5 != puVar2; puVar5 = puVar5 + 4) {
    if (*puVar5 == param_1) goto LAB_005c2afd;
  }
  puVar5 = (uint *)0x0;
LAB_005c2afd:
  if (*(char *)(in_ECX + 0xcc) == '\0') {
    bVar7 = puVar5 == (uint *)0x0;
  }
  else if (((int)param_1 < *(int *)(in_ECX + 0xd0)) || (*(int *)(in_ECX + 0xd4) <= (int)param_1)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    uVar6 = *(int *)(in_ECX + 0x24) - 1;
    if (-1 < (int)uVar6) {
      iVar3 = uVar6 * 0x28;
      do {
        iVar4 = *(int *)(in_ECX + 0x1c) + iVar3;
        if (*(char *)(in_ECX + 0xcc) == '\0') {
          if (((int)(uint)*(byte *)(iVar4 + 2) < (int)*puVar5) ||
             ((int)(puVar5[1] + *puVar5) < (int)(uint)*(byte *)(iVar4 + 2))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
        }
        else {
          bVar7 = *(byte *)(iVar4 + 2) == param_1;
        }
        if (bVar7) {
          iVar1 = *(int *)(iVar4 + 0x20);
          if ((iVar1 == 1) && (param_2 != '\0')) {
            *(undefined4 *)(iVar4 + 0x20) = 3;
          }
          else if ((iVar1 == 2) && (param_2 == '\0')) {
            *(undefined4 *)(iVar4 + 0x20) = 0;
          }
          else if ((iVar1 == 3) && (param_2 == '\0')) {
            *(undefined4 *)(iVar4 + 0x20) = 1;
          }
          if (*(int *)(iVar4 + 0x20) == 0) {
            FUN_00425dd0(&LAB_00426f22,iVar4);
            if (uVar6 < *(uint *)(in_ECX + 0x24)) {
              FUN_00425ad0(uVar6);
            }
          }
          else {
            FUN_00425dd0(FUN_00426f1d,iVar4);
          }
        }
        iVar3 = iVar3 + -0x28;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    if (param_3 == '\0') {
      if (*(char *)(in_ECX + 0xcc) != '\0') {
        *(char *)(param_1 + 0xbb + in_ECX) = param_2;
        return;
      }
      iVar3 = *puVar5 + 1;
      if (iVar3 <= (int)(puVar5[1] + *puVar5)) {
        do {
          *(char *)(in_ECX + 0xbb + iVar3) = param_2;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= (int)(puVar5[1] + *puVar5));
      }
    }
  }
  return;
}

