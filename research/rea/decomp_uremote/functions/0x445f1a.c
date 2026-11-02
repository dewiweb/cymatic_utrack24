// rea decompile_all
// name: FUN_00445f1a
// address: 0x445f1a
// body: available
// range: 0x445f1a-0x44642e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00445f1a(int param_1)

{
  int iVar1;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x445f26;
  local_14 = 0;
  local_24 = FUN_005af82d(0x44);
  local_8 = 0;
  if (local_24 == 0) {
    local_18 = 0;
  }
  else {
    FUN_0046537e(&local_20);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    local_18 = FUN_00447f6b(local_24,0x1000,&local_20,0,2,0x18,0x18,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    local_14 = local_14 & 0xfffffffe;
    FUN_004652d6();
  }
  FUN_004480a5();
  local_24 = FUN_005af82d(0x44);
  local_8 = 3;
  if (local_24 == 0) {
    local_1c = 0;
  }
  else {
    FUN_0046537e(&local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = local_14 | 2;
    local_1c = FUN_00447f6b(local_24,0x1000,&local_20,0,2,0x18,0x18,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    FUN_004652d6();
  }
  FUN_004480a5();
  local_20 = FUN_005af82d(0x44);
  local_8 = 6;
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,7);
    local_14 = local_14 | 4;
    local_20 = FUN_00447f6b(local_20,0x1000,&local_24,0,2,0x18,0x18,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    FUN_004652d6();
  }
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 9;
  if (iVar1 != 0) {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,10);
    local_14 = local_14 | 8;
    FUN_00447f6b(iVar1,0x1000,&local_24,0,2,0x18,0x18,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    FUN_004652d6();
  }
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0xc;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_14 = local_14 | 0x10;
    iVar1 = FUN_00447f6b(iVar1,0x3000,&local_24,0xb9,1,0x18,0x18,6);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x10) != 0) {
    local_14 = local_14 & 0xffffffef;
    FUN_004652d6();
  }
  *(undefined4 *)(iVar1 + 0x2c) = 2;
  *(undefined4 *)(iVar1 + 0x30) = 5;
  FUN_004480a5();
  *(int *)(param_1 + 0x1cc) = iVar1;
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0xf;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_14 = local_14 | 0x20;
    iVar1 = FUN_00447f6b(iVar1,0x3000,&local_24,0xe6,1,0x18,0xc,3);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x20) != 0) {
    local_14 = local_14 & 0xffffffdf;
    FUN_004652d6();
  }
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  *(undefined4 *)(iVar1 + 0x30) = 5;
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0x12;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_14 = local_14 | 0x40;
    iVar1 = FUN_00447f6b(iVar1,0x3000,&local_24,0xa0,1,0x18,8,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x40) != 0) {
    local_14 = local_14 & 0xffffffbf;
    FUN_004652d6();
  }
  *(undefined4 *)(iVar1 + 0x2c) = 2;
  *(undefined4 *)(iVar1 + 0x30) = 5;
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0x15;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    local_14 = local_14 | 0x80;
    iVar1 = FUN_00447f6b(iVar1,0x3000,&local_24,200,1,0x18,0x10,2);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x80) != 0) {
    local_14 = local_14 & 0xffffff7f;
    FUN_004652d6();
  }
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 5;
  FUN_004480a5();
  FUN_00447525();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0x18;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x19);
    local_14 = local_14 | 0x100;
    local_18 = FUN_00447f6b(iVar1,0x2000,&local_24,0xb9,1,0x18,2,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x100) != 0) {
    local_14 = local_14 & 0xfffffeff;
    FUN_004652d6();
  }
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0x1b;
  if (iVar1 != 0) {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    local_14 = local_14 | 0x200;
    FUN_00447f6b(iVar1,0x2000,&local_24,0xe6,1,0x18,2,0);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 0x200) != 0) {
    local_14 = local_14 & 0xfffffdff;
    FUN_004652d6();
  }
  FUN_004480a5();
  iVar1 = FUN_005af82d(0x44);
  local_8 = 0x1e;
  if (iVar1 != 0) {
    FUN_0046537e(&local_24);
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    local_14 = local_14 | 0x400;
    FUN_00447f6b(iVar1,0x5000,&local_24,0,0,0,0,0);
  }
  if ((local_14 & 0x400) != 0) {
    FUN_004652d6();
  }
  FUN_004480a5();
  *(int *)(param_1 + 100) = param_1 + 0x20;
  return;
}

