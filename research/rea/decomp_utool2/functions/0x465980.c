// rea decompile_all
// name: FUN_00465980
// address: 0x465980
// body: available
// range: 0x465980-0x465c10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465980(void)

{
  undefined1 *in_ECX;
  undefined1 in_DL;
  float fVar1;
  float in_XMM1_Da;
  float fVar2;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fVar3;
  float local_20;
  undefined1 local_18;
  undefined1 local_10;
  
  fVar3 = in_XMM3_Da * 255.0;
  if (0.0 <= fVar3) {
    fVar1 = 255.0;
    if (fVar3 <= 255.0) {
      fVar1 = fVar3;
    }
  }
  else {
    fVar1 = 0.0;
  }
  local_10 = SUB81((double)fVar1 + 6755399441055744.0,0);
  if (in_XMM2_Da <= 0.0) {
    *in_ECX = local_10;
    in_ECX[1] = local_10;
    in_ECX[2] = local_10;
    in_ECX[3] = in_DL;
    return;
  }
  if (1.0 <= in_XMM2_Da) {
    local_20 = 1.0;
    in_XMM2_Da = local_20;
  }
  fVar3 = in_XMM1_Da;
  FUN_00436410();
  fVar2 = (in_XMM1_Da - fVar3) * 6.0 + 1e-05;
  fVar3 = fVar2;
  FUN_00436410();
  fVar3 = fVar2 - fVar3;
  local_18 = SUB81((double)((1.0 - in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
  if (1.0 <= fVar2) {
    if (fVar2 < 2.0) {
      *in_ECX = local_18;
      in_ECX[1] = local_10;
      in_ECX[3] = in_DL;
      local_20._0_1_ = SUB81((double)((1.0 - fVar3 * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
      in_ECX[2] = local_20._0_1_;
      return;
    }
    if (fVar2 < 3.0) {
      in_ECX[3] = in_DL;
      local_20._0_1_ =
           SUB81((double)((1.0 - (1.0 - fVar3) * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
      *in_ECX = local_20._0_1_;
      in_ECX[1] = local_10;
      in_ECX[2] = local_18;
      return;
    }
    if (fVar2 < 4.0) {
      *in_ECX = local_10;
      in_ECX[3] = in_DL;
      local_20._0_1_ = SUB81((double)((1.0 - fVar3 * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
      in_ECX[1] = local_20._0_1_;
      in_ECX[2] = local_18;
      return;
    }
    if (fVar2 < 5.0) {
      *in_ECX = local_10;
      in_ECX[1] = local_18;
      in_ECX[3] = in_DL;
      local_20._0_1_ =
           SUB81((double)((1.0 - (1.0 - fVar3) * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
      in_ECX[2] = local_20._0_1_;
      return;
    }
    local_20._0_1_ = SUB81((double)((1.0 - fVar3 * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
    *in_ECX = local_20._0_1_;
    local_20._0_1_ = local_18;
  }
  else {
    *in_ECX = local_18;
    local_20._0_1_ =
         SUB81((double)((1.0 - (1.0 - fVar3) * in_XMM2_Da) * fVar1) + 6755399441055744.0,0);
  }
  in_ECX[1] = local_20._0_1_;
  in_ECX[2] = local_10;
  in_ECX[3] = in_DL;
  return;
}

