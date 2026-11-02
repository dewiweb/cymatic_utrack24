// rea decompile_all
// name: FUN_0043e0b3
// address: 0x43e0b3
// body: available
// range: 0x43e0b3-0x43e299 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0043e0b3(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  FUN_004bfd7b();
  param_1[0x1c] = uTrack::StatusListener::vftable;
  param_1[0x1d] = uTrack::MetersListener::vftable;
  puVar1 = (undefined4 *)FUN_00474777();
  *puVar1 = MeterBridge::vftable;
  param_1[0x23] = param_2;
  param_1[0x24] = param_3;
  *param_1 = MeterBridge::vftable;
  param_1[0x1c] = MeterBridge::vftable;
  param_1[0x1d] = MeterBridge::vftable;
  param_1[0x25] = 6;
  FUN_0043d31e(param_1 + 0x26);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_004c0e0e(0);
  FUN_0043e015();
  FUN_0043e047();
  if ((*(byte *)(param_1 + 0x25) & 4) == 0) {
    FUN_004c1055(param_1 + 0x26);
  }
  else {
    FUN_004c1064(0xffffffff);
  }
  param_3 = 0x18;
  do {
    iVar2 = FUN_005af82d(0xa8);
    if (iVar2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_0043dc05(iVar2,param_1 + 0x26,param_1[0x24]);
    }
    FUN_004c1064(0xffffffff);
    iVar2 = param_1[0x56] + 1;
    if (((int)param_1[0x55] < iVar2) &&
       (uVar4 = iVar2 / 2 + 8 + iVar2 & 0xfffffff8, param_1[0x55] != uVar4)) {
      if ((int)uVar4 < 1) {
        _free((void *)param_1[0x54]);
        param_1[0x54] = 0;
      }
      else {
        if ((void *)param_1[0x54] == (void *)0x0) {
          pvVar3 = _malloc(uVar4 << 2);
        }
        else {
          pvVar3 = _realloc((void *)param_1[0x54],uVar4 << 2);
        }
        param_1[0x54] = pvVar3;
      }
      param_1[0x55] = uVar4;
    }
    param_3 = param_3 + -1;
    iVar2 = param_1[0x56];
    param_1[0x56] = iVar2 + 1;
    *(undefined4 *)(param_1[0x54] + iVar2 * 4) = param_2;
  } while (param_3 != 0);
  FUN_0043e6ae();
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 100;
  return param_1;
}

