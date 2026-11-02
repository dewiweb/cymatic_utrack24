// rea decompile_all
// name: FUN_005ee630
// address: 0x5ee630
// body: available
// range: 0x5ee630-0x5ee721 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee630(uint param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (-1 < param_4) {
    uVar2 = param_1 + param_2 >> ((byte)param_4 & 0x1f);
    iVar7 = 0;
    uVar8 = 1 << ((byte)param_4 & 0x1f);
    param_1 = 0;
    if (uVar8 != 0) {
      do {
        uVar5 = uVar2 - param_2;
        if (param_1 != 0) {
          uVar5 = uVar2;
        }
        uVar6 = 0;
        if (uVar5 == 0) {
LAB_005ee6a5:
          iVar4 = 1;
        }
        else {
          do {
            uVar3 = *(uint *)(in_ECX + iVar7 * 4);
            iVar7 = iVar7 + 1;
            if ((int)uVar3 < 0) {
              uVar3 = ~uVar3;
            }
            uVar6 = uVar6 | uVar3;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          if (uVar6 == 0) goto LAB_005ee6a5;
          iVar4 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar4 = iVar4 + 2;
        }
        *(int *)(in_EDX + param_1 * 4) = iVar4;
        param_1 = param_1 + 1;
      } while (param_1 < uVar8);
    }
  }
  param_4 = param_4 + -1;
  iVar7 = 0;
  if (param_3 <= param_4) {
    bVar1 = (byte)param_4 & 0x1f;
    uVar2 = 1 << bVar1 | 1U >> 0x20 - bVar1;
    iVar4 = (param_4 - param_3) + 1;
    uVar5 = uVar2;
    do {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar6 = *(uint *)(in_EDX + iVar7 * 4);
        if (uVar6 < *(uint *)(in_EDX + 4 + iVar7 * 4)) {
          uVar6 = *(uint *)(in_EDX + 4 + iVar7 * 4);
        }
        iVar7 = iVar7 + 2;
        *(uint *)(in_EDX + uVar8 * 4) = uVar6;
        uVar8 = uVar8 + 1;
      }
      uVar2 = uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f;
      iVar4 = iVar4 + -1;
      uVar5 = uVar2;
    } while (iVar4 != 0);
  }
  return;
}

