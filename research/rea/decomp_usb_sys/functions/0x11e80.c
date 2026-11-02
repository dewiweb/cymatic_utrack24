// rea decompile_all
// name: FUN_00011e80
// address: 0x11e80
// body: available
// range: 0x11e80-0x12044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011e80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  longlong *local_158;
  longlong local_148;
  short local_140 [4];
  undefined2 *local_138;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 *local_128;
  undefined2 local_120 [12];
  undefined2 local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_188;
  local_148 = 0;
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  while( true ) {
    local_108[0] = 0;
    local_140[0] = 0;
    local_138 = local_108;
    local_140[1] = 0xf0;
    RtlAppendUnicodeToString(local_140,L"\\Device\\");
    RtlAppendUnicodeToString(local_140,L"{49F4A1FF-55DD-4d45-9743-7B623EFF0361}#");
    local_120[0] = 0;
    local_130 = 0;
    local_128 = local_120;
    local_12e = 0x18;
    RtlIntegerToUnicodeString(uVar3,10,&local_130);
    RtlAppendUnicodeStringToString(local_140,&local_130);
    local_148 = 0;
    local_158 = &local_148;
    local_160 = 0;
    local_168 = 0x100;
    iVar1 = IoCreateDevice(param_2,0,local_140,0x22);
    if ((-1 < iVar1) && (local_148 != 0)) break;
    if (0xff < uVar3) goto LAB_0001200a;
    uVar3 = uVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(ushort *)(param_1 + 0x1a) = local_140[0] + 2U;
  puVar2 = FUN_00011878((uint)(ushort)(local_140[0] + 2U),0x644f4342,'\x01');
  *(ulonglong **)(param_1 + 0x20) = puVar2;
  if (puVar2 != (ulonglong *)0x0) {
    RtlCopyUnicodeString(param_1 + 0x18,local_140);
    *(longlong *)(local_148 + 0x40) = param_1;
    *(longlong *)(param_1 + 0x10) = local_148;
    *(uint *)(local_148 + 0x30) = *(uint *)(local_148 + 0x30) | 4;
    *(uint *)(local_148 + 0x30) = *(uint *)(local_148 + 0x30) & 0xffffff7f;
    goto LAB_00012020;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
LAB_0001200a:
  FUN_000118cc(param_2,0xe0070003,"Unable to create static device object.");
LAB_00012020:
  FUN_00026110(local_18 ^ (ulonglong)auStack_188);
  return;
}

