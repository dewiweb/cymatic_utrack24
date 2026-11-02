// rea decompile_all
// name: FUN_00454506
// address: 0x454506
// body: available
// range: 0x454506-0x454838 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00454506(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined1 *puVar9;
  int iVar10;
  float fVar11;
  int local_24;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x454512;
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 0xc);
  local_24 = *(int *)(in_ECX + 0x1c);
  local_14 = FUN_005b3fb0();
  FUN_004c8af9(in_ECX + 0xd34,local_14);
  iVar7 = (((*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x70)) - *(int *)(in_ECX + 0xd4c)) - iVar1)
          + -0x14;
  if (*(char *)(in_ECX + 0x78) != '\0') {
    iVar7 = *(int *)(in_ECX + 0x18) + iVar1 * -2;
    local_24 = *(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x74);
    local_14 = FUN_005b3fb0();
    FUN_004c8af9(in_ECX + 0xd34,local_14);
  }
  fVar11 = (float)local_14;
  iVar2 = FUN_005b3fb0();
  iVar3 = FUN_00440367((iVar7 + iVar2 * -6) / 7);
  iVar7 = *(int *)(in_ECX + 0x70);
  iVar6 = (local_24 - local_14) / 2 + *(int *)(in_ECX + 0x74);
  iVar10 = local_14;
  if (*(char *)(in_ECX + 0x78) == '\0') {
    iVar5 = *(int *)(in_ECX + 0x18);
    iVar4 = iVar6;
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x18);
    iVar4 = FUN_00439b5a(0,local_14);
  }
  FUN_004c09cc((iVar5 - *(int *)(in_ECX + 0xd4c)) - iVar1,iVar4,iVar10);
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar3 * 2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar3;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar3;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar3;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar2;
  FUN_004c09cc(iVar7,iVar6,local_14);
  iVar7 = iVar7 + iVar3;
  FUN_004c09cc(iVar7,iVar6,local_14);
  FUN_004c09cc(iVar7 + iVar2,iVar6,local_14);
  iVar1 = FUN_0044bfc5();
  fVar8 = (float10)FUN_0043d2e1((float)*(int *)(iVar1 + 8) * 0.5,fVar11 * 0.85);
  puVar9 = local_18;
  fVar11 = (float)fVar8;
  FUN_0044bfc5();
  FUN_0049f81a(puVar9,fVar11);
  local_8 = 0;
  FUN_004e5c31(local_18);
  FUN_004e5c31(local_18);
  FUN_004e5c31(local_18);
  FUN_004e5c31(local_18);
  FUN_004e5c31(local_18);
  FUN_004e5c31(local_18);
  FUN_004e981e(in_ECX + 0x56c,local_18);
  FUN_004e981e(in_ECX + 0x6b8,local_18);
  FUN_004e981e(in_ECX + 0x804,local_18);
  FUN_004e981e(in_ECX + 0x950,local_18);
  FUN_004e981e(in_ECX + 0xa9c,local_18);
  FUN_004e981e(in_ECX + 0xbe8,local_18);
  FUN_004c4d7a();
  return;
}

