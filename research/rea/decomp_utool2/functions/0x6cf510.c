// rea decompile_all
// name: FUN_006cf510
// address: 0x6cf510
// body: available
// range: 0x6cf510-0x6cf6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cf510(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int in_ECX;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  float *pfStack_18;
  
  if ((((param_1[1] == 0.0) && (param_1[2] == 0.0)) && (param_1[3] == 0.0)) &&
     (((param_1[5] == 0.0 && (*param_1 == 1.0)) && (param_1[4] == 1.0)))) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      return;
    }
    FUN_006e6400(auStack_20);
    FUN_006ce9f0(1);
    pfVar1 = *(float **)(in_ECX + 0x24);
    if (pfVar1 != (float *)0x0) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
      uStack_1c = 0x6cf5b3;
      pfStack_18 = pfVar1;
      FUN_004bfe14();
    }
  }
  else {
    pfVar1 = *(float **)(in_ECX + 0x24);
    if (pfVar1 == (float *)0x0) {
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
      pfStack_18 = (float *)0x6cf5dd;
      pfVar2 = operator_new(0x18);
      *pfVar2 = *param_1;
      pfVar2[1] = param_1[1];
      pfVar2[2] = param_1[2];
      pfVar2[3] = param_1[3];
      pfVar2[4] = param_1[4];
      pfVar2[5] = param_1[5];
      pfVar1 = *(float **)(in_ECX + 0x24);
      if (pfVar1 != pfVar2) {
        *(float **)(in_ECX + 0x24) = pfVar2;
        uStack_1c = 0x6cf61a;
        pfStack_18 = pfVar1;
        FUN_004bfe14();
      }
    }
    else {
      if (((*pfVar1 == *param_1) && (pfVar1[1] == param_1[1])) &&
         ((pfVar1[2] == param_1[2] &&
          (((pfVar1[3] == param_1[3] && (pfVar1[4] == param_1[4])) && (pfVar1[5] == param_1[5]))))))
      {
        return;
      }
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
      pfVar1 = *(float **)(in_ECX + 0x24);
      *pfVar1 = *param_1;
      pfVar1[1] = param_1[1];
      pfVar1[2] = param_1[2];
      pfVar1[3] = param_1[3];
      pfVar1[4] = param_1[4];
      pfVar1[5] = param_1[5];
    }
  }
  FUN_006e6400(auStack_20);
  FUN_006ce9f0(1);
  pfStack_18 = (float *)0x0;
  uStack_1c = 0x6cf6d1;
  FUN_006cf760();
  return;
}

