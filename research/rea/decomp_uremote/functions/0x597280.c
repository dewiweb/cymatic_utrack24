// rea decompile_all
// name: FUN_00597280
// address: 0x597280
// body: available
// range: 0x597280-0x597435 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00597280(ushort param_1,void *param_2,ushort param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  bool local_15;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 *local_c;
  uint local_8;
  
  if (param_3 < 0x58d) {
    if (*(char *)(in_ECX + 0xc5d) == '\0') {
      uVar2 = FUN_0052e6e0();
      *(undefined4 *)(in_ECX + 0xc60) = uVar2;
    }
    FUN_00513420();
    puVar1 = *(undefined1 **)(in_ECX + 0xc40);
    local_8 = (param_3 + 7 & 0xfffffffc) + 4;
    *puVar1 = 0xef;
    puVar1[1] = 0x51;
    *(ushort *)(puVar1 + 2) = param_1 & 0xf000 | param_3 & 0xfff;
    local_c = (undefined4 *)(puVar1 + 4);
    if (param_3 != 0) {
      if (param_2 != (void *)0x0) {
        _memcpy(local_c,param_2,(uint)param_3);
      }
      local_c = (undefined4 *)((uint)((int)local_c + param_3 + 3) & 0xfffffffc);
    }
    local_10 = FUN_005ac0a0(0x50544c4d,*(undefined4 *)(in_ECX + 0xc40),local_8 - 4);
    *local_c = local_10;
    local_c = local_c + 1;
    if (*(char *)(in_ECX + 0xc5d) == '\0') {
      uVar3 = (*(code *)**(undefined4 **)(in_ECX + 0xc48))
                        (*(undefined4 *)(in_ECX + 0xc40),local_8 & 0xffff,local_14,
                         *(undefined4 *)(*(int *)(in_ECX + 0xc48) + 0xc));
      uVar3 = uVar3 & 0xff;
    }
    else {
      uVar3 = (**(code **)(*(int *)(in_ECX + 0xc44) + 0x2c))
                        (*(undefined4 *)(in_ECX + 0xc4c),*(undefined4 *)(in_ECX + 0xc40),local_8);
    }
    local_15 = uVar3 != 0;
    LOCK();
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x14));
  }
  else {
    local_15 = false;
  }
  return local_15;
}

