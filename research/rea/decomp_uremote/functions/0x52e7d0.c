// rea decompile_all
// name: FUN_0052e7d0
// address: 0x52e7d0
// body: available
// range: 0x52e7d0-0x52e930 inclusive
// range: 0x52e933-0x52e969 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0052e7d0(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *in_ECX;
  undefined1 local_7c [12];
  undefined1 local_70 [88];
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0518;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)in_ECX[1] == '\0') {
    uVar3 = (uint)in_ECX & 0xffffff00;
  }
  else {
    local_18 = param_1 - in_ECX[2];
    local_11 = 1000 < local_18;
    iVar1 = in_ECX[3];
    if (iVar1 == 0) {
      if (((bool)local_11) &&
         (cVar2 = FUN_005263f0(DAT_00955fd4 ^ (uint)&stack0xfffffffc), cVar2 == '\0')) {
        in_ECX[3] = 1;
      }
    }
    else if (iVar1 == 1) {
      if (*(short *)(*in_ECX + 0xb0) == 0) {
        FUN_00512300();
        local_8 = 0;
        FUN_0052dce0(local_7c);
        FUN_00533dd0(0,local_7c);
        FUN_00529f40(local_70,0);
        in_ECX[3] = 2;
        local_8 = 0xffffffff;
        FUN_005123f0();
      }
      else {
        in_ECX[3] = 3;
      }
    }
    else if (iVar1 == 3) {
      in_ECX[3] = 4;
      *(undefined1 *)(in_ECX + 1) = 0;
    }
    uVar3 = (uint)(in_ECX[3] == 4);
  }
  ExceptionList = local_10;
  return uVar3;
}

