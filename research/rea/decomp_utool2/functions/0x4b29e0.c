// rea decompile_all
// name: FUN_004b29e0
// address: 0x4b29e0
// body: available
// range: 0x4b29e0-0x4b2b2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_004b29e0(float param_1,float param_2)

{
  byte bVar1;
  int *piVar2;
  float *pfVar3;
  float *in_ECX;
  int in_EDX;
  float fVar4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  bVar1 = *(byte *)(in_EDX + 0x68) & 1;
  if (bVar1 == 0) {
    param_1 = (float)*(int *)(in_EDX + 0x10) + param_1;
    param_2 = (float)*(int *)(in_EDX + 0x14) + param_2;
  }
  else {
    if (bVar1 == 0) {
      if (*(int *)(in_EDX + 0xc) == 0) goto LAB_004b2abd;
      uStack_2c = 0x4b2a1c;
      piVar2 = (int *)FUN_006d1d80();
    }
    else {
      uStack_2c = 0x4b2a0a;
      piVar2 = (int *)FUN_0068db10();
    }
    if (piVar2 != (int *)0x0) {
      FUN_004b3560(param_1,param_2);
      (**(code **)(*piVar2 + 0x24))(auStack_30);
      pfVar3 = (float *)FUN_004b15b0();
      param_1 = *pfVar3;
      param_2 = pfVar3[1];
    }
  }
LAB_004b2abd:
  pfVar3 = *(float **)(in_EDX + 0x24);
  if (pfVar3 != (float *)0x0) {
    fVar4 = pfVar3[3] * param_1;
    param_1 = pfVar3[1] * param_2 + param_1 * *pfVar3 + pfVar3[2];
    param_2 = pfVar3[4] * param_2 + fVar4 + pfVar3[5];
  }
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return in_ECX;
}

