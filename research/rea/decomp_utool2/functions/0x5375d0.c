// rea decompile_all
// name: FUN_005375d0
// address: 0x5375d0
// body: available
// range: 0x5375d0-0x53766e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005375d0(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  *(undefined1 *)(in_ECX + 0x20) = param_2._0_1_;
  in_ECX[0x1f] = param_1;
  uVar1 = *(uint *)(*(int *)(in_ECX[0x1e] + 0x7c) + 0x5c);
  if ((((int)param_1 < (int)uVar1) && (param_1 < uVar1)) &&
     (*(int *)(*(int *)(*(int *)(in_ECX[0x1e] + 0x7c) + 0x54) + param_1 * 4) != 0)) {
    puStack_c = &param_2;
    uStack_10 = 0x537605;
    piVar3 = (int *)FUN_0053f050();
    iVar2 = in_ECX[0x21];
    in_ECX[0x21] = *piVar3;
    *piVar3 = iVar2;
    puVar4 = param_2;
  }
  else {
    puVar4 = (undefined4 *)in_ECX[0x21];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00537643;
    in_ECX[0x21] = 0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar4 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puStack_c = (undefined4 *)0x1;
      uStack_10 = 0x537643;
      (**(code **)*puVar4)();
    }
  }
LAB_00537643:
  if ((undefined **)*in_ECX != ViewPort_TrakList::TLItem::vftable) {
    puStack_c = (undefined4 *)0x53766d;
    (*(code *)((undefined **)*in_ECX)[0x21])();
  }
  FUN_006e6400(auStack_18);
  FUN_006ce9f0(1);
  return;
}

