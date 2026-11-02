// rea decompile_all
// name: FUN_0001e698
// address: 0x1e698
// body: available
// range: 0x1e698-0x1e80a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001e698(longlong param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  char in_CR8;
  short local_res20 [4];
  ulonglong uVar8;
  
  uVar5 = (ulonglong)param_4;
  iVar3 = -0x80000000;
  uVar8 = uVar5;
  piVar7 = param_5;
  if (param_4 != 0) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *piVar7 = -0x80000000;
      piVar7 = piVar7 + 1;
    }
  }
  if ((in_CR8 != '\0') || (param_4 == 0)) {
    return -0x3ffffff3;
  }
  lVar6 = DAT_00029268 + 0x18;
  uVar8 = 0;
  KeWaitForSingleObject(lVar6,0,0,0,0);
  if (*(longlong *)(param_1 + -0x60) == 0) {
    KeReleaseMutex(lVar6,0);
    return -0x3fffff63;
  }
  lVar4 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),param_2);
  if (lVar4 == 0) {
    iVar2 = -0x3fffff63;
    goto LAB_0001e7e0;
  }
  if (param_3 == 1) {
    cVar1 = *(char *)(lVar4 + 0x74);
LAB_0001e771:
    if (cVar1 != '\0') {
      local_res20[0] = 0;
      iVar2 = FUN_0001cae8(*(longlong *)(param_1 + -0x60),cVar1,1,2,uVar8 & 0xffffffffffffff00,2,
                           local_res20);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (local_res20[0] != 0x8000) {
        iVar3 = (int)local_res20[0] << 8;
      }
      if (param_4 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_5 = iVar3;
          param_5 = param_5 + 1;
        }
      }
      goto LAB_0001e7e0;
    }
  }
  else if (param_3 == 2) {
    cVar1 = *(char *)(lVar4 + 0x76);
    goto LAB_0001e771;
  }
  iVar2 = -0x3ffffff3;
LAB_0001e7e0:
  KeReleaseMutex(lVar6,0);
  return iVar2;
}

