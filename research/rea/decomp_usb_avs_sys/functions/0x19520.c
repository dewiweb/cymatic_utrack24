// rea decompile_all
// name: FUN_00019520
// address: 0x19520
// body: available
// range: 0x19520-0x196e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00019520(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *in_R9;
  uint *puVar6;
  bool bVar7;
  uint *in_stack_00000028;
  uint in_stack_00000030;
  uint *in_stack_00000038;
  uint *in_stack_00000040;
  
  if ((*(longlong *)(in_R9 + 0xc) == 0) && (*(longlong *)(in_R9 + 0xe) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar7) &&
     ((((*in_R9 != 0x58 || ((uint)in_R9[0x14] < in_stack_00000028[0x13])) ||
       (in_stack_00000028[0x14] < (uint)in_R9[0x13])) ||
      (((uint)in_R9[0x12] < in_stack_00000028[0x11] || (in_stack_00000028[0x12] < (uint)in_R9[0x11])
       ))))) {
    return 0xc0000272;
  }
  uVar5 = 0;
  bVar7 = *(ulonglong *)(in_stack_00000028 + 0xc) < 0x11cec35605589f81;
  if ((*(ulonglong *)(in_stack_00000028 + 0xc) == 0x11cec35605589f81) &&
     (bVar7 = *(ulonglong *)(in_stack_00000028 + 0xe) < 0x5a595500aa0001bf,
     *(ulonglong *)(in_stack_00000028 + 0xe) == 0x5a595500aa0001bf)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  puVar4 = in_stack_00000028;
  puVar6 = in_stack_00000028;
  if (iVar3 == 0) {
    uVar5 = 0x52;
    puVar4 = in_stack_00000038;
    puVar6 = in_stack_00000038 + 0x10;
  }
  bVar7 = *(ulonglong *)(in_stack_00000028 + 0xc) < 0x11d0a184518590a2;
  if ((*(ulonglong *)(in_stack_00000028 + 0xc) == 0x11d0a184518590a2) &&
     (bVar7 = *(ulonglong *)(in_stack_00000028 + 0xe) < 0xf3bad94fc0002285,
     *(ulonglong *)(in_stack_00000028 + 0xe) == 0xf3bad94fc0002285)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  if (iVar3 == 0) {
    uVar5 = 0x5a;
    if (0x59 < in_stack_00000030) {
      in_stack_00000038[0x10] = 0;
      in_stack_00000038[0x11] = 0;
    }
    puVar6 = in_stack_00000038 + 0x12;
    puVar4 = in_stack_00000038;
  }
  else if (uVar5 == 0) {
    return 0xc0000272;
  }
  if (in_stack_00000030 != 0) {
    if (uVar5 <= in_stack_00000030) {
      *in_stack_00000040 = uVar5;
      *(undefined8 *)puVar4 = *(undefined8 *)in_stack_00000028;
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(in_stack_00000028 + 2);
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(in_stack_00000028 + 4);
      *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(in_stack_00000028 + 6);
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(in_stack_00000028 + 8);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(in_stack_00000028 + 10);
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(in_stack_00000028 + 0xc);
      *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(in_stack_00000028 + 0xe);
      *(undefined2 *)puVar6 = 0x92;
      uVar2 = in_stack_00000028[0x10];
      *(ushort *)((longlong)puVar6 + 2) = (ushort)uVar2;
      uVar1 = in_stack_00000028[0x14];
      *(undefined2 *)((longlong)puVar6 + 0xe) = 0x10;
      *(undefined2 *)(puVar6 + 4) = 0;
      puVar6[1] = uVar1;
      uVar2 = (int)((uint)(ushort)uVar2 * 0x10) >> 3;
      *(short *)(puVar6 + 3) = (short)uVar2;
      puVar6[2] = (uVar2 & 0xffff) * uVar1;
      *puVar4 = uVar5;
      puVar4[2] = (uint)(ushort)puVar6[3];
      return 0;
    }
    return 0xc0000023;
  }
  *in_stack_00000040 = uVar5;
  return 0x80000005;
}

