// rea decompile_all
// name: FUN_004eb6b2
// address: 0x4eb6b2
// body: available
// range: 0x4eb6b2-0x4eb739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb6b2(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = 0x4eb6c5;
  FUN_004e9764();
  if ((*(byte *)(in_ECX + 0x94) & 0x20) != 0) {
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0x4eb6d9;
    FUN_004ea237();
    iStack_1c = 1;
    uStack_20 = 0x4eb6e0;
    uStack_20 = FUN_004ec153();
    uStack_24 = 0x4eb6e8;
    FUN_004ea237();
  }
  uStack_20 = 0x4eb6ee;
  FUN_004c1613();
  iStack_1c = 0x4eb6f5;
  FUN_004e99ba();
  iStack_1c = 0x4eb6fc;
  piVar3 = (int *)FUN_004c0453();
  if (piVar3 != (int *)0x0) {
    iStack_1c = 0x4eb709;
    cVar2 = FUN_004e97f3();
    if (cVar2 == '\0') {
      iVar1 = *piVar3;
      iStack_1c = in_ECX + 0x70;
      FUN_004c0827(in_ECX,auStack_30);
      FUN_004edd2f();
      uStack_28 = 0x4eb730;
      (**(code **)(iVar1 + 0x68))();
    }
  }
  return;
}

