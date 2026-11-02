// rea decompile_all
// name: FUN_0050ae20
// address: 0x50ae20
// body: available
// range: 0x50ae20-0x50afef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050ae20(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_8;
  
  iVar2 = FUN_0052e6e0();
  in_ECX[0x4a] = iVar2;
  if (in_ECX[0x4b] != 0) {
    if ((uint)(in_ECX[0x4a] - in_ECX[0x4b]) < 500) {
      Sleep(500);
    }
    in_ECX[0x4b] = 0;
  }
  cVar1 = FUN_0052bf70();
  if (cVar1 == '\0') {
    *(undefined2 *)(in_ECX + 0x2c) = 0;
    FUN_005063e0();
    in_ECX[0x2d] = 0;
    in_ECX[0x46] = 1;
    cVar1 = FUN_0052bee0();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*in_ECX + 0x1c))();
      if ((cVar1 == '\0') || (in_ECX[0x4c] == 0)) {
        (**(code **)(*in_ECX + 0x18))();
        in_ECX[0x4c] = 4;
        local_8 = 4;
      }
      else {
        in_ECX[0x4c] = in_ECX[0x4c] + -1;
        local_8 = 4;
      }
    }
    else {
      in_ECX[0x46] = 2;
      cVar1 = FUN_005254c0();
      if (cVar1 == '\0') {
        in_ECX[0x46] = 1;
      }
      local_8 = 0;
    }
  }
  else if (in_ECX[0x46] == 3) {
    FUN_00526eb0();
    local_8 = 0;
  }
  else if (in_ECX[0x46] == 1) {
    in_ECX[0x46] = 2;
    cVar1 = FUN_005254c0();
    if (cVar1 == '\0') {
      in_ECX[0x46] = 1;
    }
    local_8 = 0;
  }
  else {
    local_8 = 0x28;
  }
  return local_8;
}

