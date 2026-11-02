// rea decompile_all
// name: FUN_00642800
// address: 0x642800
// body: available
// range: 0x642800-0x642992 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00642800(int param_1,int param_2,float param_3,undefined4 param_4,float param_5,
                 uint param_6)

{
  float fVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 local_18 [4];
  float local_14;
  float local_c;
  
  if (in_ECX[2] < 1) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  FUN_00682660(local_18,param_1,param_2,(param_6 & 0x44) == 0);
  if ((param_6 >> 3 & 1) == 0) {
    if ((param_6 >> 4 & 1) != 0) {
      param_3 = (param_3 + param_5) - (local_14 + local_c);
      goto LAB_006428fb;
    }
    param_3 = (param_5 - local_c) * 0.5 + param_3;
  }
  param_3 = param_3 - local_14;
LAB_006428fb:
  FUN_00642c90(param_1,param_2,param_3);
  if ((param_6 >> 6 & 1) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = param_1 * 0x1c;
    fVar5 = *(float *)(iVar4 + 0x10 + *in_ECX);
    if (0 < param_2) {
      do {
        fVar1 = *(float *)(iVar4 + 0x10 + *in_ECX);
        if (fVar1 != fVar5) {
          fVar5 = fVar1;
          FUN_00642700(iVar2 + param_1,iVar3 - iVar2);
          iVar2 = iVar3;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (iVar3 < param_2);
      if (iVar2 < iVar3) {
        FUN_00642700(iVar2 + param_1,iVar3 - iVar2);
      }
    }
  }
  return;
}

