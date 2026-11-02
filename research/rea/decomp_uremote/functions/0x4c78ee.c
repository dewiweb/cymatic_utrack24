// rea decompile_all
// name: FUN_004c78ee
// address: 0x4c78ee
// body: available
// range: 0x4c78ee-0x4c7a1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c78ee(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  void *local_28;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  puVar1 = &LAB_005dd340;
  local_8 = 0x4c78fa;
  if ((*(char *)(in_EDX + 0xda) != '\0') && (iVar5 = 0, *(int *)(in_EDX + 0xa4) != 0)) {
    puVar2 = (undefined4 *)(in_ECX + 8);
    if (*(char *)*puVar2 == '\0') {
      puVar2 = (undefined4 *)(in_ECX + 4);
    }
    FUN_004652e4(puVar2);
    local_8 = 0;
    FUN_004f0349(*(undefined4 *)(in_EDX + 0xbc));
    local_8._0_1_ = 1;
    if (0 < local_20) {
      do {
        FUN_004c72a5(local_18);
        local_8._0_1_ = 2;
        thunk_FUN_00465aae(local_14);
        iVar3 = thunk_FUN_0046087d();
        if (iVar3 == 1) {
          uVar4 = FUN_00465153(local_1c);
          puVar1 = local_18;
          local_8._0_1_ = 3;
          uVar4 = thunk_FUN_00465ac3(uVar4);
          thunk_FUN_00465aae(uVar4);
          uVar4 = thunk_FUN_00465ac3(puVar1);
          thunk_FUN_00465aae(uVar4);
          FUN_004652d6();
        }
        else {
          uVar4 = thunk_FUN_00465ac3(local_18);
          thunk_FUN_00465b22(uVar4);
        }
        local_8._0_1_ = 1;
        FUN_004652d6();
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_20);
    }
    FUN_00465317(in_EDX + 0x74);
    local_8 = (uint)local_8._1_3_ << 8;
    _free(local_28);
    puVar1 = (undefined1 *)FUN_004652d6();
  }
  return puVar1;
}

