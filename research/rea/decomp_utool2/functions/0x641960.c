// rea decompile_all
// name: FUN_00641960
// address: 0x641960
// body: available
// range: 0x641960-0x641b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00641960(int param_1)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *in_ECX;
  float fVar4;
  float fVar5;
  float in_XMM2_Da;
  undefined4 in_XMM3_Da;
  float fVar6;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fd0c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = in_XMM2_Da * 0.5;
  local_18 = 0.0;
  local_20 = in_XMM3_Da;
  local_1c = in_XMM2_Da;
  local_14 = in_XMM2_Da;
  if (local_24 < in_XMM2_Da) {
    do {
      FUN_00471a50(uVar2);
      if (in_ECX[1] != 0) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = 0;
      }
      in_ECX[2] = 0;
      in_ECX[3] = local_14;
      in_ECX[4] = local_20;
      in_ECX[5] = *(undefined4 *)(param_1 + 8);
      cVar1 = FUN_0063f830(param_1);
      if (cVar1 == '\0') {
        local_8 = 0;
        FUN_00469080(param_1,in_ECX);
        local_8 = 0xffffffff;
        FUN_0046ffb0();
        FID_conflict__free((void *)0x0);
      }
      FUN_006417c0();
      if ((int)in_ECX[2] < 2) {
        ExceptionList = local_10;
        return;
      }
      pfVar3 = (float *)FUN_00641c20(local_2c);
      fVar6 = pfVar3[1] - *pfVar3;
      pfVar3 = (float *)FUN_00641c20(local_34);
      fVar4 = pfVar3[1] - *pfVar3;
      fVar5 = fVar4;
      if (fVar6 <= fVar4) {
        fVar5 = fVar6;
      }
      if (fVar5 <= 0.0) {
        ExceptionList = local_10;
        return;
      }
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar4 = fVar4 / fVar5;
      if (0.9 < fVar4) {
        ExceptionList = local_10;
        return;
      }
      if (local_18 < fVar4) {
        local_1c = local_14;
        local_18 = fVar4;
      }
      in_XMM2_Da = local_14 - 10.0;
      local_14 = in_XMM2_Da;
    } while (local_24 < in_XMM2_Da);
  }
  if (local_1c != in_XMM2_Da) {
    local_14 = in_XMM2_Da;
    FUN_00684960(param_1);
  }
  ExceptionList = local_10;
  return;
}

