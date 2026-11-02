// rea decompile_all
// name: FUN_004744b3
// address: 0x4744b3
// body: available
// range: 0x4744b3-0x4745fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004744b3(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  uint local_c;
  undefined4 *local_8;
  
  uVar3 = FUN_00467ec4();
  local_8 = (undefined4 *)FUN_005af82d(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    *local_8 = juce::ReferenceCountedObject::vftable;
    local_8[1] = 0;
    *local_8 = juce::Timer::TimerThread::CallTimersMessage::vftable;
  }
  if (local_8 != (undefined4 *)0x0) {
    LOCK();
    local_8[1] = local_8[1] + 1;
    UNLOCK();
  }
  cVar2 = *(char *)(in_ECX + 0x38);
  do {
    if (cVar2 != '\0') {
LAB_004745df:
      if (local_8 != (undefined4 *)0x0) {
        piVar1 = local_8 + 1;
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_8)(1);
        }
      }
      return;
    }
    local_c = FUN_00467ec4();
    if (local_c == uVar3) {
      uVar6 = 1;
      local_c = uVar3;
LAB_004745ca:
      FUN_00467a43(uVar6);
    }
    else {
      if (local_c < uVar3) {
        iVar5 = (local_c - uVar3) + -1;
      }
      else {
        iVar5 = local_c - uVar3;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
      for (iVar4 = *(int *)(in_ECX + 0x48); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) - iVar5;
      }
      if (*(int *)(in_ECX + 0x48) == 0) {
        iVar5 = 1000;
      }
      else {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x48) + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
      if (0 < iVar5) {
        uVar6 = FUN_00470645(1,0x32);
        goto LAB_004745ca;
      }
      piVar1 = (int *)(in_ECX + 0x4c);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 1;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 == 0) {
        FUN_00473c1d();
        do {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1;
          UNLOCK();
          if (iVar5 == 0) goto LAB_004745d1;
          FUN_00467a43(4);
          if (*(char *)(in_ECX + 0x38) != '\0') goto LAB_004745df;
          uVar3 = FUN_00467ec4();
        } while (uVar3 <= local_c + 300);
        FUN_00473c1d();
      }
    }
LAB_004745d1:
    cVar2 = *(char *)(in_ECX + 0x38);
    uVar3 = local_c;
  } while( true );
}

