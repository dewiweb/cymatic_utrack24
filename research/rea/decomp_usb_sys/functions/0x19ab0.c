// rea decompile_all
// name: FUN_00019ab0
// address: 0x19ab0
// body: available
// range: 0x19ab0-0x19c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019ab0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  ulonglong local_c8 [2];
  short local_b8 [80];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_f8;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x4c);
  *(char *)(param_1 + 0x198a) = cVar1;
  *(short *)(param_1 + 0x1988) = (cVar1 * 8 + (short)cVar1) * 8 + 0xd0;
  iVar2 = FUN_000140cc();
  FUN_000264d0(local_c8,0,0x10);
  iVar3 = FUN_00014134(DAT_00029268,local_b8);
  if (-1 < iVar3) {
    RtlInitUnicodeString(local_d8,local_b8);
    iVar4 = RtlGUIDFromString(local_d8,local_c8);
    iVar3 = 0;
    if (iVar4 < 0) {
      iVar3 = iVar4;
    }
  }
  if ((iVar2 != 0) &&
     ((iVar2 = IoRegisterDeviceInterface
                         (*(undefined8 *)(param_1 + 0x70),&DAT_00027368,0,param_1 + 0x78), iVar2 < 0
      || (*(longlong *)(param_1 + 0x80) == 0)))) {
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,
                 "Unable to register default device interface.");
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if ((-1 < iVar3) &&
     ((iVar3 = IoRegisterDeviceInterface(*(undefined8 *)(param_1 + 0x70),local_c8,0,param_1 + 0x88),
      iVar3 < 0 || (*(longlong *)(param_1 + 0x90) == 0)))) {
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,
                 "Unable to register vendor-specific device interface.");
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_00026110(local_18 ^ (ulonglong)auStack_f8);
  return;
}

