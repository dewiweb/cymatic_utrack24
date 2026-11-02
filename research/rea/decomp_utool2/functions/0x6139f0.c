// rea decompile_all
// name: FUN_006139f0
// address: 0x6139f0
// body: available
// range: 0x6139f0-0x613b98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00613a46) */
/* WARNING: Removing unreachable block (ram,0x00613ab5) */

void FUN_006139f0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  uint *in_EDX;
  longlong lVar3;
  int *local_78;
  char local_74;
  uint local_6c;
  int iStack_68;
  void *local_4c;
  uint uStack_3c;
  int local_38;
  int local_34;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  uint uStack_2b;
  undefined4 uStack_27;
  undefined5 uStack_23;
  int iStack_1e;
  undefined3 uStack_1a;
  undefined2 local_17;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cc69;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_00629660(in_ECX,0x2000);
  local_8 = 0;
  lVar3 = (**(code **)(*local_78 + 4))(uVar1);
  if (lVar3 < 1) {
    lVar3 = 0;
  }
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  uStack_3c = (uint)lVar3 - 0x400;
  uVar1 = (uint)((uint)lVar3 < 0x400);
  local_38 = iVar2 - uVar1;
  if ((local_38 < 0) || ((local_38 == 0 || iVar2 < (int)uVar1 && (uStack_3c == 0)))) {
    local_38 = 0;
    uStack_3c = 0;
  }
  uStack_23 = 0;
  iStack_1e = 0;
  uStack_1a = 0;
  local_17 = 0;
  local_15 = 0;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2f = 0;
  uStack_2b = 0;
  uStack_27 = 0;
  if (CONCAT44(local_38,uStack_3c) < lVar3) {
    while( true ) {
      iVar2 = (int)((ulonglong)lVar3 >> 0x20);
      local_6c = (uint)lVar3 - 0x16;
      uVar1 = (uint)((uint)lVar3 < 0x16);
      iStack_68 = iVar2 - uVar1;
      if ((iStack_68 < 0) || ((iStack_68 == 0 || iVar2 < (int)uVar1 && (local_6c == 0)))) {
        iStack_68 = 0;
        local_6c = 0;
      }
      iStack_1e = local_34;
      iVar2 = FUN_00623650(&local_34,0x16);
      if (iVar2 != 0x16) break;
      iVar2 = 0;
      do {
        if (*(int *)((int)&local_34 + iVar2) == 0x6054b50) {
          FUN_00623650(&local_34,0x16);
          *in_EDX = uStack_2b >> 8 & 0xffff;
          goto LAB_00613b1e;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x16);
      lVar3 = CONCAT44(iStack_68,local_6c);
      if ((iStack_68 <= local_38) &&
         ((iStack_68 < local_38 || (lVar3 = CONCAT44(iStack_68,local_6c), local_6c <= uStack_3c))))
      break;
    }
  }
LAB_00613b1e:
  FID_conflict__free(local_4c);
  if ((local_74 != '\0') && (local_78 != (int *)0x0)) {
    (**(code **)*local_78)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

