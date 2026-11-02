// rea decompile_all
// name: FUN_00015028
// address: 0x15028
// body: available
// range: 0x15028-0x1512e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00015028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  undefined8 local_res8;
  uint7 in_stack_ffffffffffffffd9;
  
  lVar3 = DAT_00029268;
  uVar6 = (undefined7)((ulonglong)param_3 >> 8);
  iVar4 = -0x3fffffff;
  plVar1 = (longlong *)(DAT_00029268 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    return -0x1fffffff;
  }
  uVar5 = 0;
  local_res8 = param_1;
LAB_00015060:
  do {
    while( true ) {
      do {
        if (uVar5 == 0) {
          if ((longlong *)*plVar1 == plVar1) {
            return iVar4;
          }
          uVar5 = *plVar1 - *(longlong *)(lVar3 + 0xe0);
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0xe0) + uVar5);
          if (plVar2 == plVar1) {
            return iVar4;
          }
          uVar5 = (longlong)plVar2 - *(longlong *)(lVar3 + 0xe0);
        }
        if (uVar5 == 0) {
          return iVar4;
        }
      } while (*(char *)(uVar5 + 0x1b12) != '\0');
      if (*(char *)(uVar5 + 0x1c) != '\0') break;
      iVar4 = -0x1fffffb0;
    }
    iVar4 = FUN_0001c804(uVar5,*(int *)(lVar3 + 0x6fc));
  } while (iVar4 < 0);
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar3 + 0x6fc));
  if (*(longlong *)(uVar5 + 0x1468) != 0) goto LAB_000150db;
  iVar4 = 0;
  goto LAB_00015111;
LAB_000150db:
  iVar4 = FUN_0001cb60(*(longlong *)(uVar5 + 0x1408),
                       *(undefined1 *)(*(longlong *)(uVar5 + 0x1468) + 3),CONCAT71(uVar6,1),1,
                       (ulonglong)in_stack_ffffffffffffffd9 << 8,4,&local_res8);
  if (-1 < iVar4) {
LAB_00015111:
    *(undefined1 *)(uVar5 + 0x1b12) = 1;
  }
  goto LAB_00015060;
}

