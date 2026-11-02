// rea decompile_all
// name: FUN_004b1190
// address: 0x4b1190
// body: available
// range: 0x4b1190-0x4b12e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1190(int param_1,int param_2)

{
  float *pfVar1;
  byte bVar2;
  int *piVar3;
  int *in_ECX;
  int in_EDX;
  float fVar4;
  undefined8 uStack_2c;
  int iStack_28;
  int local_24;
  undefined1 local_18 [20];
  
  bVar2 = *(byte *)(in_EDX + 0x68) & 1;
  if (bVar2 == 0) {
    param_1 = *(int *)(in_EDX + 0x10) + param_1;
    param_2 = *(int *)(in_EDX + 0x14) + param_2;
  }
  else {
    if (bVar2 == 0) {
      if (*(int *)(in_EDX + 0xc) == 0) goto LAB_004b1287;
      piVar3 = (int *)FUN_006d1d80();
    }
    else {
      piVar3 = (int *)FUN_0068db10();
    }
    if (piVar3 != (int *)0x0) {
      FUN_004b3000(param_1,param_2);
      (**(code **)(*piVar3 + 0x24))(local_18,(float)iStack_28,(float)local_24);
      piVar3 = (int *)FUN_004b30a0();
      param_1 = *piVar3;
      param_2 = piVar3[1];
    }
  }
LAB_004b1287:
  pfVar1 = *(float **)(in_EDX + 0x24);
  if (pfVar1 != (float *)0x0) {
    fVar4 = (float)param_1;
    param_1 = (int)(pfVar1[1] * (float)param_2 + *pfVar1 * fVar4 + pfVar1[2]);
    param_2 = (int)(pfVar1[3] * fVar4 + pfVar1[4] * (float)param_2 + pfVar1[5]);
  }
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}

