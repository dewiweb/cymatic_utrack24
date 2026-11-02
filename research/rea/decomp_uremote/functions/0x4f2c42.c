// rea decompile_all
// name: FUN_004f2c42
// address: 0x4f2c42
// body: available
// range: 0x4f2c42-0x4f2d35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2c42(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_ESI;
  undefined4 local_2c;
  tagTRACKMOUSEEVENT local_18;
  undefined1 *local_8;
  
  if (*(char *)((int)unaff_ESI + 0x5a) == '\0') {
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 1;
    local_2c = 0x4f2c5d;
    FUN_004f4b66();
    FUN_004f1b01();
    local_18.hwndTrack = (HWND)unaff_ESI[0xe];
    local_18.dwHoverTime = 0;
    local_18.cbSize = 0x10;
    local_18.dwFlags = 2;
    local_2c = 0x4f2c85;
    TrackMouseEvent(&local_18);
    FUN_004c4e62();
    FUN_004c50cf();
    FUN_004c49bc();
  }
  else if (*(char *)((int)unaff_ESI + 0x59) == '\0') {
    local_8 = &stack0xffffffd0;
    uVar2 = FUN_004a8e4a(param_2);
    FUN_004a8e4a(param_1);
    local_2c = uVar2;
    cVar1 = (**(code **)(*unaff_ESI + 0x48))();
    if (cVar1 == '\0') {
      return;
    }
  }
  if ((_DAT_0095dccc & 1) == 0) {
    _DAT_0095dccc = _DAT_0095dccc | 1;
    iVar3 = FUN_0046d36e();
    if (iVar3 < 0x203) {
      DAT_0095dcc8 = 0x10;
    }
    else {
      DAT_0095dcc8 = 0;
    }
  }
  uVar4 = FUN_00467ec4();
  if (DAT_0095dbe8 + DAT_0095dcc8 <= uVar4) {
    local_8 = (undefined1 *)&local_2c;
    local_2c = param_1;
    DAT_0095dbe8 = uVar4;
    FUN_004f2bc6();
  }
  return;
}

