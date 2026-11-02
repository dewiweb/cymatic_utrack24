// rea decompile_all
// name: FUN_00022448
// address: 0x22448
// body: available
// range: 0x22448-0x22622 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022448(longlong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar3 = DAT_00029268;
  *(uint **)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 200) = param_3;
  uVar9 = *param_2;
  uVar8 = 0;
  *(uint *)(param_1 + 0xc0) = uVar9;
  uVar1 = param_2[2];
  *(uint *)(param_1 + 0xc4) = uVar1;
  iVar4 = uVar1 * param_3 * 4;
  *(int *)(param_1 + 0xdc) = *(int *)(lVar3 + 0x6f8) * 2;
  *(int *)(param_1 + 0xcc) = iVar4;
  *(int *)(param_1 + 0xd0) = iVar4 + 0xc;
  *(int *)(param_1 + 0xf4) = (int)(8000000 / (ulonglong)uVar9);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 0x120),0);
  }
  uVar9 = *(uint *)(param_1 + 200);
  auVar2 = ZEXT816(0xc) * ZEXT416(uVar9);
  uVar5 = auVar2._0_8_;
  if (auVar2._8_8_ != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,uVar5,0x5f6e6577);
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar6,0,uVar5);
    iVar4 = uVar9 - 1;
    if (-1 < iVar4) {
      puVar7 = puVar6 + 1;
      do {
        *(undefined1 *)(puVar7 + -1) = 0;
        *(undefined4 *)((longlong)puVar7 + -4) = 0;
        *(undefined4 *)puVar7 = 0xcf;
        puVar7 = (ulonglong *)((longlong)puVar7 + 0xc);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  *(ulonglong **)(param_1 + 0x120) = puVar6;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 0x110),0);
  }
  uVar9 = *(uint *)(param_1 + 200);
  auVar2 = ZEXT816(0xc) * ZEXT416(uVar9);
  uVar5 = auVar2._0_8_;
  if (auVar2._8_8_ != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,uVar5,0x5f6e6577);
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar6,0,uVar5);
    iVar4 = uVar9 - 1;
    if (-1 < iVar4) {
      puVar7 = puVar6 + 1;
      do {
        *(undefined1 *)(puVar7 + -1) = 0;
        *(undefined4 *)((longlong)puVar7 + -4) = 0;
        *(undefined4 *)puVar7 = 0xcf;
        puVar7 = (ulonglong *)((longlong)puVar7 + 0xc);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  *(ulonglong **)(param_1 + 0x110) = puVar6;
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 200);
  uVar5 = uVar8;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      *(int *)(uVar8 + 4 + *(longlong *)(param_1 + 0x110)) = (int)uVar5;
      uVar9 = (int)uVar5 + 1;
      uVar8 = uVar8 + 0xc;
      uVar5 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 0x118));
  }
  return;
}

