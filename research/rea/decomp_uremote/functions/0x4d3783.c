// rea decompile_all
// name: FUN_004d3783
// address: 0x4d3783
// body: available
// range: 0x4d3783-0x4d38e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004d3783(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = param_2;
  uStack_4 = 8;
  local_8 = 0x4d378f;
  uStack_2c = *(undefined4 *)(param_2 + 0x1c);
  iStack_30 = param_2;
  puStack_34 = &param_2;
  puStack_38 = (undefined4 *)0x4d37a0;
  (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  puStack_38 = &param_2;
  puStack_3c = (undefined1 *)0x4d37b0;
  FUN_0047ceaa();
  puStack_3c = (undefined1 *)0x4d37b7;
  cVar2 = FUN_004c3153();
  if (cVar2 == '\0') {
    puStack_40 = (undefined1 *)0x3f000000;
  }
  else {
    puStack_40 = (undefined1 *)0x3f800000;
  }
  local_18 = (undefined1 *)&puStack_3c;
  puStack_44 = (undefined1 *)&puStack_3c;
  uVar6 = 0;
  local_14 = puStack_40;
  cVar2 = FUN_004bf38c(iVar1);
  FUN_004c1e29(&local_18,(cVar2 != '\0') + 0x1000102,uVar6);
  FUN_00476237();
  puStack_40 = (undefined1 *)0x4d3803;
  FUN_0047cda7();
  puStack_3c = (undefined1 *)0x3e99999a;
  puStack_40 = (undefined1 *)0x4d3814;
  FUN_004c07be();
  puStack_3c = (undefined1 *)0x4;
  puStack_40 = (undefined1 *)0x4d381b;
  iVar3 = FUN_00440367();
  puStack_40 = *(undefined1 **)(iVar1 + 0x1c);
  puStack_44 = (undefined1 *)0x4d3828;
  FUN_00440367();
  puStack_3c = (undefined1 *)0x4d3839;
  fVar5 = (float10)FUN_0049fa3d();
  puStack_3c = (undefined1 *)(float)(fVar5 * (float10)0.6000000238418579);
  puStack_40 = (undefined1 *)0x4d384e;
  local_18 = puStack_3c;
  puStack_40 = (undefined1 *)FUN_004a8e4a();
  puStack_44 = (undefined1 *)0x4d3871;
  local_14 = puStack_40;
  local_18 = (undefined1 *)FUN_00440367();
  puStack_44 = local_14;
  iVar4 = FUN_00440367();
  puStack_3c = (undefined1 *)0x0;
  puStack_40 = (undefined1 *)0x2;
  local_14 = (undefined1 *)&puStack_44;
  puStack_44 = (undefined1 *)0x24;
  FUN_0047d12a(local_18,iVar3,(*(int *)(iVar1 + 0x18) - iVar4) - (int)local_18,
               *(int *)(iVar1 + 0x1c) + iVar3 * -2);
  puStack_3c = (undefined1 *)0x4d38d9;
  FUN_004c4d7a();
  return;
}

