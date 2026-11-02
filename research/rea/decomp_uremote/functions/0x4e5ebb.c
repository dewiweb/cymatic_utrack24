// rea decompile_all
// name: FUN_004e5ebb
// address: 0x4e5ebb
// body: available
// range: 0x4e5ebb-0x4e5fe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e5ebb(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_ESI;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4e5ec7;
  if (unaff_ESI[0x28] == 0) {
    puVar3 = (undefined4 *)(**(code **)(*unaff_ESI + 0xb0))();
    puVar1 = (undefined4 *)unaff_ESI[0x28];
    if ((puVar1 != puVar3) && (unaff_ESI[0x28] = (int)puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    FUN_004c1064(0xffffffff);
    uVar4 = FUN_004e5b73(unaff_ESI,local_18);
    local_8 = 0;
    FUN_004e99ff(uVar4,0);
    local_8 = 0xffffffff;
    FUN_004652d6();
    *(int *)(unaff_ESI[0x28] + 300) = unaff_ESI[0x32];
    FUN_004e9cfe();
    FUN_004c301e();
    iVar2 = unaff_ESI[0x28];
    if (iVar2 != 0) {
      FUN_004718c0(unaff_ESI + 0x21,local_1c);
      local_8 = 1;
      thunk_FUN_0046087d();
      local_24 = 0;
      local_20 = FUN_00439b5a(0);
      (**(code **)(*(int *)(iVar2 + 0x70) + 0xc))(&local_24);
      local_8 = 0xffffffff;
      FUN_004652d6();
      (**(code **)(*unaff_ESI + 0x84))();
      FUN_004c1613(unaff_ESI);
      (**(code **)(*unaff_ESI + 0xbc))(unaff_ESI[0x28]);
      FUN_004c1397(0,0,0);
      FUN_004c301e();
    }
  }
  return;
}

