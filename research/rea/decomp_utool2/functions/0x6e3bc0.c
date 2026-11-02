// rea decompile_all
// name: FUN_006e3bc0
// address: 0x6e3bc0
// body: available
// range: 0x6e3bc0-0x6e3d08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e3bc0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int *in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000034;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_c;
  
  iVar2 = *in_stack_00000010;
  if (*(int *)(in_ECX + 0xf4) != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined4 **)(in_ECX + 0xf4);
    *(int *)(in_ECX + 0xf4) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_18 = 1;
        uStack_1c = 0x6e3c02;
        (**(code **)*puVar3)();
      }
    }
  }
  iVar2 = *in_stack_0000001c;
  if (*(int *)(in_ECX + 0xf8) != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined4 **)(in_ECX + 0xf8);
    *(int *)(in_ECX + 0xf8) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_18 = 1;
        uStack_1c = 0x6e3c37;
        (**(code **)*puVar3)();
      }
    }
  }
  iVar2 = *in_stack_00000028;
  if (*(int *)(in_ECX + 0xfc) != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined4 **)(in_ECX + 0xfc);
    *(int *)(in_ECX + 0xfc) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_18 = 1;
        uStack_1c = 0x6e3c6a;
        (**(code **)*puVar3)();
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x100) = in_stack_00000014;
  *(undefined2 *)(in_ECX + 0xe0) = 0x100;
  *(undefined4 *)(in_ECX + 0x10c) = in_stack_00000018;
  *(undefined4 *)(in_ECX + 0x104) = in_stack_00000020;
  *(undefined4 *)(in_ECX + 0x110) = in_stack_00000024;
  *(undefined4 *)(in_ECX + 0x108) = in_stack_0000002c;
  *(undefined4 *)(in_ECX + 0x114) = in_stack_00000030;
  local_c = SUB84((double)(in_stack_00000034 * 255.0) + 6755399441055744.0,0);
  if (local_c < 0) {
    local_c = 0;
  }
  else if (0xff < local_c) {
    local_c = 0xff;
  }
  *(char *)(in_ECX + 0xe2) = (char)local_c;
  FUN_006e6400(auStack_24);
  FUN_006ce9f0(1);
  return;
}

