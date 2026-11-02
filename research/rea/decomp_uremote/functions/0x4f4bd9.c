// rea decompile_all
// name: FUN_004f4bd9
// address: 0x4f4bd9
// body: available
// range: 0x4f4bd9-0x4f4ce0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4bd9(uint param_1)

{
  int iVar1;
  short sVar2;
  int iVar4;
  ushort local_30 [5];
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  uint uVar3;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar3 = param_1 & 0xffff;
  sVar2 = (short)param_1;
  if ((param_1 & 0x10000) == 0) {
    if ((0x60 < sVar2) && (sVar2 < 0x7b)) {
      uVar3 = param_1 - 0x20 & 0xffff;
    }
    sVar2 = (short)uVar3;
    local_30[0] = 0x2c;
    local_30[1] = 0xbc;
    local_30[2] = 0x2b;
    local_30[3] = 0xbb;
    local_30[4] = 0x2d;
    local_26 = 0xbd;
    local_24 = 0x2e;
    local_22 = 0xbe;
    local_20 = 0x3b;
    local_1e = 0xba;
    local_18 = 0x2f;
    local_1c = 0x3a;
    local_16 = 0xbf;
    local_12 = 0xbf;
    local_10 = 0x5b;
    local_e = 0xdb;
    local_c = 0x5d;
    local_14 = 0x3f;
    local_a = 0xdd;
    iVar4 = 0;
    local_1a = local_1e;
    iVar1 = FUN_004124b7();
    if (0 < iVar1) {
      do {
        if ((ushort)uVar3 == local_30[iVar4]) {
          uVar3 = (uint)local_30[iVar4 + 1];
        }
        sVar2 = (short)uVar3;
        iVar4 = iVar4 + 2;
      } while (iVar4 < iVar1);
    }
  }
  GetAsyncKeyState((int)sVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

