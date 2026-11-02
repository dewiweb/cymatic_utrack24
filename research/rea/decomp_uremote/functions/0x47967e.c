// rea decompile_all
// name: FUN_0047967e
// address: 0x47967e
// body: available
// range: 0x47967e-0x4797e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047967e(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,float param_7,float param_8)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined1 local_2c [32];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((0.0 < param_4) && (0.0 < param_5)) {
    local_c = param_2;
    local_8 = param_3;
    FUN_004772cf(local_2c,param_6,param_2,param_3);
    param_3 = param_7;
    uVar1 = (uint)(ushort)((ushort)(param_8 < param_7) << 8 |
                           (ushort)(NAN(param_8) || NAN(param_7)) << 10 |
                          (ushort)(param_8 == param_7) << 0xe);
    uVar2 = extraout_ECX;
    if (param_8 <= param_7) {
      while ((POPCOUNT((byte)(uVar1 >> 8) & 5) & 1U) != 0) {
        uVar3 = uVar2;
        FUN_004a4a67(param_4,param_5,param_3);
        FUN_004a4aac(uVar2,uVar3);
        FUN_00478c1a(uVar2,uVar3);
        param_3 = param_3 - 0.05;
        uVar1 = (uint)(ushort)((ushort)(param_8 < param_3) << 8 |
                              (ushort)(NAN(param_8) || NAN(param_3)) << 10);
        uVar2 = extraout_ECX_01;
      }
    }
    else {
      while ((uVar1 & 0x4100) == 0) {
        uVar3 = uVar2;
        FUN_004a4a67(param_4,param_5,param_3);
        FUN_004a4aac(uVar2,uVar3);
        FUN_00478c1a(uVar2,uVar3);
        param_3 = param_3 + 0.05;
        uVar2 = extraout_ECX_00;
        uVar1 = (uint)(ushort)((ushort)(param_8 < param_3) << 8 |
                              (ushort)(param_8 == param_3) << 0xe);
      }
    }
    uVar3 = uVar2;
    FUN_004a4a67(param_4,param_5,param_8);
    FUN_004a4aac(uVar2,uVar3);
    FUN_00478c1a(uVar2,uVar3);
  }
  return;
}

