// rea decompile_all
// name: FUN_004d3af0
// address: 0x4d3af0
// body: available
// range: 0x4d3af0-0x4d3c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3af0(undefined4 param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  float fStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 *puStack_28;
  uint uStack_24;
  int local_20;
  float local_1c;
  
  local_1c = 1.4013e-45;
  local_20 = param_2;
  uStack_24 = 0x4d3b06;
  cVar3 = FUN_004c30fb();
  if (cVar3 != '\0') {
    puStack_28 = (undefined1 *)&local_1c;
    local_20 = 0;
    uStack_24 = 0x1000206;
    local_2c = 7.092546e-39;
    FUN_004c1e29();
    local_20 = 0x4d3b29;
    FUN_0047cda7();
    local_20 = *(undefined4 *)(param_2 + 0x1c);
    uStack_24 = *(undefined4 *)(param_2 + 0x18);
    local_1c = 1.4013e-45;
    puStack_28 = (undefined1 *)0x0;
    local_2c = (float)param_1;
    local_30 = 7.092584e-39;
    FUN_0047d353();
  }
  iVar5 = *(int *)(param_2 + 0x1c);
  local_1c = (float)iVar5 * 0.75;
  local_20 = 0x41700000;
  uStack_24 = 0x4d3b66;
  fVar6 = (float10)FUN_0043d2e1();
  fVar2 = (float)fVar6 * 1.1;
  local_1c = param_4;
  local_20 = param_3;
  iVar1 = *in_ECX;
  uStack_24 = 0x4d3b8c;
  uStack_24 = FUN_004c3153();
  uStack_24 = uStack_24 & 0xff;
  puStack_28 = (undefined1 *)param_2;
  local_2c = 7.092709e-39;
  uVar4 = FUN_004bf38c();
  puStack_28 = (undefined1 *)(uVar4 & 0xff);
  local_34 = ((float)iVar5 - fVar2) * 0.5;
  local_38 = 0x40800000;
  iStack_3c = param_2;
  uStack_40 = param_1;
  fStack_44 = 7.092793e-39;
  local_30 = fVar2;
  local_2c = fVar2;
  (**(code **)(iVar1 + 0x1c))();
  FUN_004c1e29(&fStack_44);
  FUN_0047cda7();
  fStack_44 = (float)fVar6;
  FUN_0047ceb8();
  fStack_44 = 7.092861e-39;
  cVar3 = FUN_004c3153();
  if (cVar3 == '\0') {
    fStack_44 = 0.5;
    FUN_0047cdee();
  }
  fStack_44 = 7.092902e-39;
  iVar5 = FUN_005b3fb0();
  fStack_44 = 0.0;
  FUN_0047d12a(iVar5 + 5,0,(*(int *)(param_2 + 0x18) - (iVar5 + 5)) + -2,
               *(undefined4 *)(param_2 + 0x1c));
  return;
}

