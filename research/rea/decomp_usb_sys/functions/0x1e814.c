// rea decompile_all
// name: FUN_0001e814
// address: 0x1e814
// body: available
// range: 0x1e814-0x1e947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001e814(longlong param_1,int param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char in_CR8;
  ulonglong uVar6;
  undefined2 local_18 [8];
  
  if (in_CR8 != '\0') {
    return -0x3ffffff3;
  }
  if (param_4 == 0) {
    return -0x3fffff63;
  }
  uVar5 = 0;
  lVar4 = DAT_00029268 + 0x18;
  uVar6 = 0;
  KeWaitForSingleObject(lVar4,0,0,0,0);
  if (*(longlong *)(param_1 + -0x60) == 0) {
    KeReleaseMutex(lVar4,0);
    return -0x3fffff63;
  }
  lVar3 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),param_2);
  if (lVar3 == 0) {
    iVar2 = -0x3fffff63;
    goto LAB_0001e920;
  }
  if (param_3 == 1) {
    cVar1 = *(char *)(lVar3 + 0x74);
LAB_0001e8c8:
    if (cVar1 != '\0') {
      if (*param_5 < -0x7fffff) {
        local_18[0] = 0x8000;
      }
      else {
        local_18[0] = (undefined2)((uint)*param_5 >> 8);
      }
      iVar2 = FUN_0001cb60(*(longlong *)(param_1 + -0x60),cVar1,
                           CONCAT71((int7)((ulonglong)uVar5 >> 8),1),2,uVar6 & 0xffffffffffffff00,2,
                           local_18);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      goto LAB_0001e920;
    }
  }
  else if (param_3 == 2) {
    cVar1 = *(char *)(lVar3 + 0x76);
    goto LAB_0001e8c8;
  }
  iVar2 = -0x3ffffff3;
LAB_0001e920:
  KeReleaseMutex(lVar4,0);
  return iVar2;
}

