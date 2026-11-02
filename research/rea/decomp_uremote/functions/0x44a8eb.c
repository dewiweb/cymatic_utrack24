// rea decompile_all
// name: FUN_0044a8eb
// address: 0x44a8eb
// body: available
// range: 0x44a8eb-0x44aba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044a8eb(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  undefined8 local_30;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x44a8f7;
  iVar1 = FUN_0044bfc5();
  local_14[0] = (float)*(int *)(iVar1 + 0xc);
  iVar1 = FUN_0044bfc5();
  local_24 = (float)*(int *)(iVar1 + 8);
  thunk_FUN_004c1265();
  thunk_FUN_004c1265();
  uVar2 = FUN_005b3fb0();
  if ((*(byte *)(in_ECX + 0x100) & 2) == 0) {
    local_18 = *(int *)(in_ECX + 0x1c);
    local_14[0] = (float)local_18 * 0.125;
    uVar2 = FUN_005b3fb0();
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x1c) / 2;
    local_1c = *(int *)(in_ECX + 0x1c) - iVar1;
    local_20 = iVar1;
    uVar3 = FUN_005b3fb0();
    FUN_004c09cc(uVar2,iVar1,uVar3);
    local_14[0] = (float)local_20 / 5.0;
    uVar2 = FUN_005b3fb0();
  }
  *(undefined4 *)(in_ECX + 0x7c) = uVar2;
  uVar2 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x80) = uVar2;
  uVar2 = FUN_005b3fb0();
  *(undefined4 *)(in_ECX + 0x84) = uVar2;
  local_20 = *(int *)(in_ECX + 0x18);
  local_30 = (double)(local_24 * 4.0);
  if (local_30 <= (double)local_20) {
    FUN_0046537e(local_14);
    local_8 = 0;
    local_24 = *(float *)(in_ECX + 0x18);
    uVar2 = FUN_005b3fb0();
    uVar2 = FUN_005b3fb0(uVar2);
    iVar1 = FUN_0044bfc5(uVar2);
    FUN_0043a9db(local_14,*(undefined4 *)(iVar1 + 0xd8));
    FUN_0049f5e8();
    FUN_004c4d7a();
    local_8 = 0xffffffff;
    FUN_004652d6();
    fVar4 = (float10)FUN_0049fa3d();
    piVar5 = &local_1c;
    fVar7 = (float)(fVar4 * (float10)0.6000000238418579);
    local_24 = fVar7;
    FUN_0044bfc5(piVar5,fVar7);
    FUN_0049f81a(piVar5,fVar7);
    FUN_0049f5e8();
    FUN_004c4d7a();
    fVar4 = (float10)FUN_0049fa3d();
    pfVar6 = &local_28;
    fVar7 = (float)fVar4;
    FUN_0044bfc5(pfVar6,fVar7);
    FUN_0049f81a(pfVar6,fVar7);
    FUN_0049f5e8();
    FUN_004c4d7a();
    fVar4 = (float10)FUN_0049fa3d();
    iVar1 = (int)&local_30 + 4;
    fVar7 = (float)(fVar4 * (float10)1.399999976158142);
    local_28 = fVar7;
    FUN_0044bfc5(iVar1,fVar7);
    FUN_0049f81a(iVar1,fVar7);
    FUN_0049f5e8();
    FUN_004c4d7a();
    FUN_0046537e(local_14);
    local_8 = 1;
    FUN_0049fa60(local_14);
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_0046537e(&local_18);
    local_8 = 2;
    FUN_0049fa60(&local_18);
    local_8 = 0xffffffff;
    FUN_004652d6();
    *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(in_ECX + 0x84);
    FUN_0049f5e8();
    FUN_00440e9b();
  }
  return;
}

