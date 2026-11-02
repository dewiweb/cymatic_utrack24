// rea decompile_all
// name: FUN_00465820
// address: 0x465820
// body: available
// range: 0x465820-0x46594c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465820(uint param_1)

{
  uint uVar1;
  float *in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = param_1 >> 0x10 & 0xff;
  uVar4 = param_1 >> 8 & 0xff;
  param_1 = param_1 & 0xff;
  uVar2 = uVar3;
  if (uVar3 < uVar4) {
    uVar2 = uVar4;
  }
  if (uVar2 < param_1) {
    uVar2 = param_1;
  }
  uVar1 = uVar3;
  if (uVar4 < uVar3) {
    uVar1 = uVar4;
  }
  if (param_1 < uVar1) {
    uVar1 = param_1;
  }
  if (uVar2 == 0) {
    in_ECX[1] = 0.0;
  }
  else {
    fVar5 = (float)(int)(uVar2 - uVar1) / (float)uVar2;
    in_ECX[1] = fVar5;
    if (0.0 < fVar5) {
      fVar5 = 1.0 / (float)(int)(uVar2 - uVar1);
      fVar6 = (float)(int)(uVar2 - uVar3) * fVar5;
      fVar7 = (float)(int)(uVar2 - uVar4) * fVar5;
      fVar5 = (float)(int)(uVar2 - param_1) * fVar5;
      if (uVar3 == uVar2) {
        *in_ECX = fVar5 - fVar7;
      }
      else if (uVar4 == uVar2) {
        *in_ECX = (fVar6 + 2.0) - fVar5;
      }
      else {
        *in_ECX = (fVar7 + 4.0) - fVar6;
      }
      fVar5 = *in_ECX * 0.16666667;
      *in_ECX = fVar5;
      if (fVar5 < 0.0) {
        *in_ECX = fVar5 + 1.0;
      }
      goto LAB_00465930;
    }
  }
  *in_ECX = 0.0;
LAB_00465930:
  in_ECX[2] = (float)uVar2 / 255.0;
  return;
}

