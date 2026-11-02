// rea decompile_all
// name: FUN_00481e5f
// address: 0x481e5f
// body: available
// range: 0x481e5f-0x481f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481e5f(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  if (0 < param_1[0xf]) {
    do {
      iVar2 = FUN_004819b8();
      local_8 = local_8 + iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0xf]);
  }
  if (((*(char *)((int)param_1 + 0xb1) == '\0') && ((char)param_1[0x35] == '\0')) &&
     (param_1[0xe] == 8)) {
    iVar4 = param_1[0xf];
    bVar1 = true;
    if (0 < iVar4) {
      piVar3 = (int *)(param_1[0x11] + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = piVar3 + 0x15;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((local_8 != 0) && (bVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x4b;
      bVar1 = false;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    if ((char)param_1[0x35] == '\0') {
      if (bVar1) {
        uVar5 = 0xc0;
      }
      else {
        uVar5 = 0xc1;
      }
    }
    else {
      uVar5 = 0xc2;
    }
  }
  else {
    uVar5 = 0xc9;
  }
  FUN_00481b62(uVar5);
  return;
}

