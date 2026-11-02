// rea decompile_all
// name: FUN_004f342e
// address: 0x4f342e
// body: available
// range: 0x4f342e-0x4f35ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f342e(void)

{
  char cVar1;
  BOOL BVar2;
  uint in_ECX;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  tagMSG local_154;
  UINT local_138;
  UINT local_134;
  char local_12d;
  BYTE local_12c [260];
  WCHAR local_28;
  undefined4 local_26 [7];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  FUN_004f1b01();
  if (in_ECX < 0x5e) {
    if (in_ECX < 0x5b) {
      if (0xf < in_ECX) {
        if ((in_ECX < 0x13) || (in_ECX == 0x14)) goto LAB_004f3583;
        if ((0x20 < in_ECX) && ((in_ECX < 0x29 || ((0x2c < in_ECX && (in_ECX < 0x2f))))))
        goto LAB_004f3594;
      }
      goto LAB_004f348f;
    }
LAB_004f3583:
    FUN_004f338a(unaff_EBX);
  }
  else {
    if (in_ECX < 0x70) {
LAB_004f348f:
      local_12d = FUN_004ed8e5(unaff_EBX,1);
      BVar2 = PeekMessageW(&local_154,*(HWND *)(unaff_EBX + 0x38),0x102,0x103,0);
      if (BVar2 == 0) {
        local_134 = MapVirtualKeyW(in_ECX,2);
        local_138 = MapVirtualKeyW(in_ECX,0);
        GetKeyboardState(local_12c);
        local_28 = L'\0';
        puVar4 = local_26;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        iVar3 = ToUnicode(in_ECX,local_138,local_12c,&local_28,8,0);
        if (iVar3 != 1) {
          local_28 = L'\0';
        }
        cVar1 = FUN_004ed781(unaff_EBX,local_134 & 0xffff,local_28);
        if ((cVar1 == '\0') && (local_12d == '\0')) goto LAB_004f3589;
        local_12d = '\x01';
      }
    }
    else {
      if (0x7f < in_ECX) {
        if ((0x8f < in_ECX) && ((in_ECX < 0x92 || ((0x9f < in_ECX && (in_ECX < 0xa6))))))
        goto LAB_004f3583;
        goto LAB_004f348f;
      }
LAB_004f3594:
      local_12d = FUN_004ed8e5(unaff_EBX,1);
      cVar1 = FUN_004ed781(unaff_EBX,in_ECX | 0x10000,0);
      if (cVar1 != '\0') goto LAB_004f35c1;
    }
    if (local_12d != '\0') goto LAB_004f35c1;
  }
LAB_004f3589:
  FUN_004c1514();
LAB_004f35c1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

