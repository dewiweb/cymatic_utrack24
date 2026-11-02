// rea decompile_all
// name: FUN_00519120
// address: 0x519120
// body: available
// range: 0x519120-0x519279 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00519120(short param_1)

{
  short sVar1;
  uint uVar2;
  uint in_ECX;
  int local_24;
  int local_20;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf6fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    if (*(int *)(in_ECX + 0x50) == 0) {
      uVar2 = in_ECX & 0xffffff00;
    }
    else {
      if ((*(short *)(in_ECX + 0x56) == -1) && (*(short *)(in_ECX + 0x58) == -1)) {
        FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
        local_8 = 0;
        if (in_ECX == 0) {
          local_20 = 0;
        }
        else {
          local_20 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)**(undefined4 **)(in_ECX + 0x50))(local_20,0,local_18,in_ECX + 0x56);
        if (in_ECX == 0) {
          local_24 = 0;
        }
        else {
          local_24 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)**(undefined4 **)(in_ECX + 0x50))
                  (local_24,*(ushort *)(in_ECX + 0x48) - 1,local_18,in_ECX + 0x58);
        local_8 = 0xffffffff;
        FUN_00501900();
      }
      uVar2 = (uint)CONCAT11((char)((ushort)*(short *)(in_ECX + 0x56) >> 8),
                             param_1 == *(short *)(in_ECX + 0x56));
    }
  }
  else {
    sVar1 = *(short *)(*(int *)(in_ECX + 0x4c) + 4);
    uVar2 = (uint)CONCAT11((char)((ushort)sVar1 >> 8),sVar1 == param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}

