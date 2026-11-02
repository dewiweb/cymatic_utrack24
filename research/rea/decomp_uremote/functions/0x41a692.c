// rea decompile_all
// name: FUN_0041a692
// address: 0x41a692
// body: available
// range: 0x41a692-0x41a71e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0041a692(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  _memset(param_1,0,0x5dc);
  iVar1 = FUN_0040ffcd("postscript-cmaps");
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    *(int *)((int)param_1 + 0x544) = iVar1;
    FUN_004194e4(param_1,param_2,param_3,param_4,param_7);
    *(undefined4 *)((int)param_1 + 0x548) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)param_1 + 0x54c) = param_5;
    *(undefined4 *)((int)param_1 + 0x5bc) = param_8;
    *(undefined4 *)((int)param_1 + 0x5b8) = param_6;
    *(undefined4 *)((int)param_1 + 0x5c0) = param_9;
    *(code **)((int)param_1 + 0x5c4) = FUN_0041a692;
    *(undefined **)((int)param_1 + 0x5c8) = &DAT_0041a71f;
    *(code **)((int)param_1 + 0x5cc) = FUN_0041997c;
    uVar2 = 0;
  }
  return uVar2;
}

