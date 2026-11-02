// rea decompile_all
// name: FUN_00448d48
// address: 0x448d48
// body: available
// range: 0x448d48-0x448ed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00448d48(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  float local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x448d54;
  iVar2 = FUN_0044bfc5();
  local_14 = (float)*(int *)(iVar2 + 8);
  iVar2 = FUN_0044bfc5();
  fVar1 = *(float *)(iVar2 + 0xc);
  local_20 = *(undefined4 *)(in_ECX + 0x18);
  local_24 = fVar1;
  uVar3 = FUN_005b3fb0();
  local_24 = (float)(int)local_24;
  uVar5 = 0;
  local_18 = uVar3;
  uVar4 = FUN_005b3fb0(0,uVar3);
  FUN_004c09cc(uVar4,uVar5,uVar3);
  local_20 = (int)fVar1 * 2;
  local_1c = in_ECX + 0x118;
  uVar3 = FUN_005b3fb0();
  uVar4 = FUN_005b3fb0(uVar3);
  FUN_004c09cc(fVar1,uVar4,uVar3);
  if (*(int *)(in_ECX + 0x5f8) != 0) {
    FUN_004c0bf7((*(int *)(in_ECX + 0x18) / 2 - (int)fVar1 / 2) -
                 *(int *)(*(int *)(in_ECX + 0x5f8) + 0x18),0);
  }
  if (*(int *)(in_ECX + 0x5fc) != 0) {
    FUN_004c0bf7(*(int *)(in_ECX + 0x18) / 2 + (int)fVar1 / 2,0);
  }
  FUN_0046537e(&local_24);
  local_8 = 0;
  FUN_0043a9ae(&local_24,*(undefined4 *)(in_ECX + 0x18),local_18);
  FUN_0049f5e8();
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  FUN_004652d6();
  iVar2 = *(int *)(in_ECX + 0x18);
  uVar3 = FUN_005b3fb0();
  FUN_0043a9ae(in_ECX + 0x604,iVar2 + (int)fVar1 * -4,uVar3);
  FUN_0049f5e8();
  FUN_004c4d7a();
  FUN_00440efe(0);
  FUN_00440e9b();
  return;
}

