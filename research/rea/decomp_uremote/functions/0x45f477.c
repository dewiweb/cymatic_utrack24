// rea decompile_all
// name: FUN_0045f477
// address: 0x45f477
// body: available
// range: 0x45f477-0x45f6da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f477(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  FUN_00465317(in_EAX + 4);
  FUN_00465317(in_EAX + 8);
  *(undefined4 *)(in_EAX + 0xc) = 0;
  FUN_00465317(in_EAX + 0x10);
  FUN_00465317(in_EAX + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = 0x18;
  FUN_00465317(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x20) = 0;
  FUN_00465317(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = 0;
  FUN_00465317(in_EAX + 0x2c);
  *(undefined4 *)(in_EAX + 0x30) = 0;
  FUN_00465317(in_EAX + 0x34);
  *(undefined4 *)(in_EAX + 0x38) = 0;
  FUN_00465317(in_EAX + 0x3c);
  *(undefined1 *)(in_EAX + 0x40) = 0;
  *(undefined4 *)(in_EAX + 0x44) = 7;
  FUN_00465317(in_EAX + 0x48);
  *(undefined4 *)(in_EAX + 0x4c) = 1;
  *(undefined4 *)(in_EAX + 0x50) = 0;
  FUN_00465317(in_EAX + 0x54);
  FUN_0043f3c8();
  FUN_0043f3c8();
  FUN_00465317(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0x74) = 0;
  *(undefined4 *)(in_EAX + 0x78) = 0;
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  *(undefined4 *)(in_EAX + 0x88) = 0;
  *(undefined4 *)(in_EAX + 0x8c) = 0;
  FUN_0044818a();
  FUN_00465317(in_EAX + 0xa0);
  *(undefined4 *)(in_EAX + 0xa4) = 0;
  *(undefined4 *)(in_EAX + 0xa8) = 0;
  *(undefined4 *)(in_EAX + 0xac) = 0;
  *(undefined4 *)(in_EAX + 0xb0) = 0;
  FUN_004481e0();
  *(undefined4 *)(in_EAX + 0xc4) = 0;
  FUN_00465317(in_EAX + 200);
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  FUN_00465317(in_EAX + 0xd4);
  *(undefined4 *)(in_EAX + 0xd8) = 0;
  FUN_00465317(in_EAX + 0xdc);
  *(undefined4 *)(in_EAX + 0xe0) = 0;
  FUN_00465317(in_EAX + 0xe4);
  *(undefined4 *)(in_EAX + 0xe8) = 0;
  FUN_00465317(in_EAX + 0xec);
  *(undefined1 *)(in_EAX + 0xf0) = 1;
  *(undefined1 *)(in_EAX + 0xf1) = 0;
  *(undefined4 *)(in_EAX + 0xf4) = 0;
  FUN_00465317(in_EAX + 0xf8);
  *(undefined4 *)(in_EAX + 0xfc) = 0;
  FUN_00465317(in_EAX + 0x100);
  *(undefined4 *)(in_EAX + 0x104) = 0;
  FUN_00465317(in_EAX + 0x108);
  *(undefined4 *)(in_EAX + 0x10c) = 1;
  FUN_00465317(in_EAX + 0x110);
  *(undefined4 *)(in_EAX + 0x114) = 1;
  FUN_00465317(in_EAX + 0x118);
  *(undefined4 *)(in_EAX + 0x11c) = 0;
  *(undefined1 *)(in_EAX + 0x120) = 0;
  *(undefined4 *)(in_EAX + 0x124) = 0;
  *(undefined4 *)(in_EAX + 0x128) = 0;
  *(undefined4 *)(in_EAX + 300) = 0;
  FUN_00465317(in_EAX + 0x1fc);
  FUN_00465317(in_EAX + 0x200);
  FUN_00465317(in_EAX + 0x204);
  puVar1 = (undefined1 *)(in_EAX + 0x1cc);
  puVar3 = (undefined2 *)(in_EAX + 0x19c);
  iVar2 = 0x18;
  do {
    puVar3[-0x18] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    puVar1[0x18] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

