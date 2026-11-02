// rea decompile_all
// name: FUN_000257a4
// address: 0x257a4
// body: available
// range: 0x257a4-0x25937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000257a4(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char local_res8 [8];
  
  uVar5 = 0;
  if ((*(char *)(param_1 + 0x29) == '\0') || (1 < *(int *)(param_1 + 0x68))) {
    FUN_00024648(param_2);
    return;
  }
  puVar4 = *(undefined2 **)(param_2 + 0x40);
  bVar6 = *(uint *)(param_2 + 0x2c) % *(uint *)(*(longlong *)(param_1 + 0x10) + 0x34) == 0;
  *(bool *)(param_2 + 0x50) = bVar6;
  if (*(int *)(param_2 + 0x2c) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
  }
  puVar4[1] = 9;
  *puVar4 = 0x80;
  *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 0x12) = uVar3;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + *(int *)(param_2 + 0x2c);
  *(longlong *)(param_2 + 0x68) = param_1;
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  UNLOCK();
  FUN_00024e5c(param_1,puVar4,FUN_00025660,param_2,local_res8);
  if (local_res8[0] == '\0') {
    FUN_00024648(param_2);
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) - *(int *)(param_2 + 0x2c);
  }
  else {
    if (!bVar6) {
      return;
    }
    puVar4 = *(undefined2 **)(param_2 + 0x48);
    puVar4[1] = 9;
    *puVar4 = 0x80;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    *(undefined4 *)(puVar4 + 0x12) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x1c) = 0;
    *(undefined8 *)(puVar4 + 0xc) = uVar5;
    LOCK();
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    UNLOCK();
    FUN_00024e5c(param_1,puVar4,FUN_0002553c,param_2,local_res8);
    if (local_res8[0] != '\0') {
      return;
    }
    FUN_00024648(param_2);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x2c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    KeSetEvent(param_1 + 0x30,0,0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    KeSetEvent(param_1 + 0x50,0,0);
  }
  return;
}

