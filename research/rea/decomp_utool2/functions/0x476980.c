// rea decompile_all
// name: FUN_00476980
// address: 0x476980
// body: available
// range: 0x476980-0x476ad5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476980(float param_1)

{
  int iVar1;
  float *in_ECX;
  float fVar2;
  int iVar3;
  float fVar4;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar5;
  float fVar6;
  
  fVar6 = in_ECX[0x10] + in_XMM1_Da;
  fVar4 = in_ECX[0x10] + in_XMM2_Da;
  fVar5 = in_ECX[1] * fVar4;
  fVar4 = in_ECX[4] * fVar4;
  iVar3 = (int)((*in_ECX * fVar6 + fVar5 + in_ECX[2]) * 256.0);
  in_ECX[7] = param_1;
  iVar1 = -(int)((*in_ECX * ((float)(int)param_1 + fVar6) + fVar5 + in_ECX[2]) * -256.0) - iVar3;
  fVar5 = (float)(iVar1 / (int)param_1);
  fVar2 = (float)(iVar1 % (int)param_1);
  in_ECX[6] = (float)(iVar3 + (int)in_ECX[0x11]);
  in_ECX[8] = fVar5;
  in_ECX[9] = fVar2;
  in_ECX[10] = fVar2;
  if ((int)fVar2 < 1) {
    in_ECX[9] = (float)((int)param_1 + (int)fVar2);
    in_ECX[10] = (float)((int)param_1 + (int)fVar2);
    in_ECX[8] = (float)((int)fVar5 + -1);
  }
  in_ECX[9] = (float)((int)in_ECX[9] - (int)param_1);
  in_ECX[0xc] = param_1;
  iVar3 = (int)((in_ECX[3] * fVar6 + fVar4 + in_ECX[5]) * 256.0);
  iVar1 = -(int)((in_ECX[3] * ((float)(int)param_1 + fVar6) + fVar4 + in_ECX[5]) * -256.0) - iVar3;
  fVar5 = (float)(iVar1 / (int)param_1);
  fVar2 = (float)(iVar1 % (int)param_1);
  in_ECX[0xb] = (float)(iVar3 + (int)in_ECX[0x11]);
  in_ECX[0xd] = fVar5;
  in_ECX[0xe] = fVar2;
  in_ECX[0xf] = fVar2;
  if ((int)fVar2 < 1) {
    in_ECX[0xe] = (float)((int)fVar2 + (int)param_1);
    in_ECX[0xf] = (float)((int)fVar2 + (int)param_1);
    in_ECX[0xe] = (float)((int)in_ECX[0xe] - (int)param_1);
    in_ECX[0xd] = (float)((int)fVar5 + -1);
    return;
  }
  in_ECX[0xe] = (float)((int)in_ECX[0xe] - (int)param_1);
  return;
}

