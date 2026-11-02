// rea decompile_all
// name: FUN_004ec409
// address: 0x4ec409
// body: available
// range: 0x4ec409-0x4ec4bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ec409(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  if (in_EAX < 1) {
    iVar3 = 0;
  }
  else {
    iVar4 = FUN_00439b5a(0);
    local_c = iVar4;
    local_8 = FUN_00439b5a(iVar4);
    (**(code **)(*(int *)(param_1 + 0x70) + 0x14))(&param_1,&local_c);
    iVar3 = in_EAX - iVar4;
    if (0 < iVar3) {
      do {
        iVar1 = iVar3 + -1;
        uVar5 = thunk_FUN_0046085c(iVar1);
        cVar2 = FUN_00464f6b(uVar5);
        if (cVar2 == '\0') break;
        iVar3 = iVar1;
      } while (0 < iVar1);
      if (0 < iVar3) {
        uVar5 = thunk_FUN_0046085c(iVar3 + -1);
        local_8 = FUN_004e936e(uVar5);
        do {
          iVar1 = iVar3 + -1;
          uVar5 = thunk_FUN_0046085c(iVar1);
          iVar6 = FUN_004e936e(uVar5);
          if (local_8 != iVar6) break;
          iVar3 = iVar1;
        } while (0 < iVar1);
      }
    }
    FUN_004652d6();
    iVar3 = iVar3 + iVar4;
  }
  return iVar3;
}

