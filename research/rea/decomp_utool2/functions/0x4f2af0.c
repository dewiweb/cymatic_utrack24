// rea decompile_all
// name: FUN_004f2af0
// address: 0x4f2af0
// body: available
// range: 0x4f2af0-0x4f2bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2af0(int *param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  int *in_ECX;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  *in_ECX = (int)param_1;
  in_ECX[1] = param_2;
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  in_ECX[2] = DVar2;
  in_ECX[3] = *(int *)(in_ECX[1] + 8);
  in_ECX[4] = *(int *)(in_ECX[1] + 0xc);
  iVar1 = *param_1;
  if (((1 < iVar1) && (3 < iVar1)) && (iVar1 == 4)) {
    FUN_004f2c00(&local_18);
    iVar1 = *in_ECX;
    in_ECX[5] = (int)(local_10 * 0.5 + local_18);
    in_ECX[6] = (int)(local_c * 0.5 + local_14);
    fVar3 = 4.0 / (*(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x1c) + 2.0);
    fVar4 = *(float *)(iVar1 + 0x1c) * fVar3;
    in_ECX[8] = (int)fVar3;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    in_ECX[7] = (int)fVar4;
    fVar3 = *(float *)(iVar1 + 0x20) * fVar3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    in_ECX[9] = (int)fVar3;
  }
  return;
}

