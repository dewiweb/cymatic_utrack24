// rea decompile_all
// name: FUN_00528bc0
// address: 0x528bc0
// body: available
// range: 0x528bc0-0x528cea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00528bc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *in_ECX;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_1 == 0) {
    local_5 = 0;
  }
  else if ((*(char *)(param_1 + 0x16) == '\0') || ((char)in_ECX[0x19] != '\0')) {
    cVar1 = FUN_00528a90();
    if (cVar1 == '\0') {
      FUN_00513420();
      uVar2 = FUN_0052e6e0();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      do {
        iVar3 = FUN_00529330(&DAT_009519f8);
        iVar4 = DAT_009519f8;
        if ((iVar3 != 0) && (iVar4 = DAT_009519f8 + 1, DAT_009519f8 + 1 == 0)) {
          iVar4 = DAT_009519f8 + 2;
        }
        DAT_009519f8 = iVar4;
      } while (iVar3 != 0);
      *(int *)(param_1 + 8) = DAT_009519f8;
      iVar4 = FUN_005293d0(param_1);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(uint **)(param_1 + 4) = in_ECX;
        if (in_ECX[0x18] < *in_ECX) {
          in_ECX[0x18] = *in_ECX;
        }
        DAT_009519f8 = DAT_009519f8 + 1;
        local_5 = 1;
      }
      LOCK();
      in_ECX[2] = in_ECX[2] - 1;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 3));
    }
    else {
      local_5 = 1;
    }
  }
  else {
    local_5 = 1;
  }
  return local_5;
}

