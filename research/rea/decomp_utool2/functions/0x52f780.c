// rea decompile_all
// name: FUN_0052f780
// address: 0x52f780
// body: available
// range: 0x52f780-0x52f869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f780(int param_1,char param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if ((char)in_ECX[0x1b] == '\0') {
    *(char *)(in_ECX + 0x1b) = param_2;
    FUN_0052f570(param_1);
    if (((param_2 != '\0') && (0 < in_ECX[5])) && (iVar5 = 0, 0 < in_ECX[5])) {
      do {
        if (param_1 == 0) {
          uVar8 = 0;
LAB_0052f7e3:
          FUN_0052f780(uVar8,1,0);
        }
        else if (param_1 == 1) {
          uVar8 = 1;
          goto LAB_0052f7e3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < in_ECX[5]);
    }
    if (param_3 != '\0') {
      for (iVar5 = in_ECX[2]; (iVar5 != 0 && (*(char *)(iVar5 + 0x6c) == '\0'));
          iVar5 = *(int *)(iVar5 + 8)) {
        uVar1 = *(uint *)(iVar5 + 0x14);
        uVar3 = 0;
        if ((int)uVar1 < 1) {
LAB_0052f842:
          uVar8 = 0;
        }
        else {
          bVar7 = uVar1 != 0;
          uVar6 = 0;
          do {
            if (bVar7) {
              iVar4 = *(int *)(*(int *)(iVar5 + 0xc) + uVar3 * 4);
            }
            else {
              iVar4 = 0;
            }
            uVar3 = uVar3 + 1;
            uVar2 = uVar6 + 1;
            if (*(int *)(iVar4 + 0x58) != 1) {
              uVar2 = uVar6;
            }
            bVar7 = uVar3 < uVar1;
            uVar6 = uVar2;
          } while ((int)uVar3 < (int)uVar1);
          if (uVar2 == 0) goto LAB_0052f842;
          if (uVar2 == uVar1) {
            uVar8 = 1;
          }
          else {
            uVar8 = 2;
          }
        }
        FUN_0052f570(uVar8);
      }
    }
    (**(code **)(*in_ECX + 0x60))();
    *(undefined1 *)(in_ECX + 0x1b) = 0;
  }
  return;
}

