// rea decompile_all
// name: FUN_00445ca1
// address: 0x445ca1
// body: available
// range: 0x445ca1-0x445e80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00445ca1(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x445cad;
  puStack_28 = (undefined4 *)0x445cb7;
  FUN_00474777();
  local_8 = 0;
  *param_1 = PlatformEmulation::vftable;
  param_1[5] = param_2;
  puStack_28 = (undefined4 *)0x445ccf;
  FUN_004642ea();
  puStack_28 = (undefined4 *)0x445cd7;
  FUN_00447f2b();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_28 = (undefined4 *)0x445ce6;
  FUN_004fa582();
  *(undefined1 *)(param_1 + 0x72) = 0;
  puStack_28 = (undefined4 *)0x445cf7;
  FUN_0047479c();
  param_2 = (undefined4 *)0x0;
  puVar1 = param_1 + 0x41;
  do {
    puStack_28 = (undefined4 *)0x445d10;
    FUN_00446953();
    puStack_28 = (undefined4 *)0x445d1d;
    FUN_004469b6();
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined2 *)(puVar1 + -0xc) = 0;
    *(undefined2 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
  } while ((int)param_2 < 0x18);
  puStack_28 = (undefined4 *)0x445d36;
  FUN_00446b21();
  puStack_28 = (undefined4 *)0x445d3d;
  FUN_00446b8f();
  param_2 = &uStack_2c;
  FUN_00467eb1(&uStack_2c);
  FUN_00446bfd(param_1);
  puStack_28 = (undefined4 *)0x445d58;
  FUN_00446df0();
  puStack_28 = (undefined4 *)0x445d60;
  FUN_00446e5e();
  puStack_28 = (undefined4 *)0x445d68;
  FUN_00446ecc();
  puStack_28 = (undefined4 *)0x445d6f;
  FUN_00446f3a();
  puStack_28 = (undefined4 *)0x445d76;
  FUN_00446fb3();
  puStack_28 = (undefined4 *)0x445d7d;
  FUN_0044702c();
  puStack_28 = (undefined4 *)0x445d84;
  FUN_004470ff();
  puStack_28 = (undefined4 *)0x445d8c;
  FUN_0044716d();
  puStack_28 = (undefined4 *)0x445d94;
  FUN_004471db();
  puStack_28 = (undefined4 *)0x445d9b;
  FUN_004472c2();
  puStack_28 = (undefined4 *)0x445da2;
  FUN_00447324();
  puStack_28 = (undefined4 *)0x445da9;
  FUN_00447386();
  iVar2 = 0;
  do {
    puStack_28 = (undefined4 *)0x445db6;
    FUN_004473e8();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  iVar2 = 0;
  do {
    puStack_28 = (undefined4 *)0x445dc9;
    FUN_0044744a();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    puStack_28 = (undefined4 *)0x445ddc;
    FUN_004474ac();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  puStack_28 = param_1;
  uStack_2c = 0x445de8;
  FUN_00445f1a();
  puStack_28 = (undefined4 *)0x0;
  uStack_2c = 0x445df0;
  FUN_00447a77();
  puStack_28 = (undefined4 *)0x445df5;
  FUN_00447afb();
  puStack_28 = (undefined4 *)0x1;
  uStack_2c = 0x445dfc;
  FUN_00447b7d();
  puStack_28 = (undefined4 *)0x0;
  uStack_2c = 0x445e02;
  FUN_00446754();
  puStack_28 = (undefined4 *)0x0;
  uStack_2c = 0x445e08;
  FUN_0044684f();
  puStack_28 = (undefined4 *)0x0;
  uStack_2c = 0x445e0e;
  FUN_004468d0();
  puStack_28 = (undefined4 *)0x445e13;
  FUN_00447d40();
  puStack_28 = (undefined4 *)0x445e18;
  FUN_00447dba();
  puStack_28 = (undefined4 *)0x445e1d;
  FUN_00447e37();
  puStack_28 = (undefined4 *)0x445e22;
  FUN_00447eb1();
  puStack_28 = &param_2;
  uStack_2c = 0x445e30;
  FUN_0046537e();
  puStack_28 = (undefined4 *)(param_1[5] + 0x3dc);
  uStack_2c = 0x445e41;
  FUN_00465317();
  puStack_28 = (undefined4 *)0x445e49;
  FUN_004652d6();
  puStack_28 = &param_2;
  uStack_2c = 0x445e57;
  FUN_0046537e();
  puStack_28 = (undefined4 *)(param_1[5] + 0x3e4);
  uStack_2c = 0x445e68;
  FUN_00465317();
  puStack_28 = (undefined4 *)0x445e70;
  FUN_004652d6();
  puStack_28 = (undefined4 *)0x445e77;
  FUN_0044642f();
  return param_1;
}

