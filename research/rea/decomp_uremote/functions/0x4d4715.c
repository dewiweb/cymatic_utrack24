// rea decompile_all
// name: FUN_004d4715
// address: 0x4d4715
// body: available
// range: 0x4d4715-0x4d48e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004d4837) */

void FUN_004d4715(undefined4 param_1,undefined4 param_2,int param_3,int param_4,float param_5,
                 int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  undefined1 *puVar6;
  float fVar7;
  float local_88;
  uint uStack_84;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc070;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_88 = param_5;
  iVar3 = FUN_00440367();
  fVar1 = (float)iVar3 * 0.4;
  fVar2 = fVar1 * 0.15;
  local_88 = 7.096969e-39;
  FUN_0047888f();
  uVar5 = 0;
  local_c = 0;
  local_88 = fVar2 * 0.5;
  FUN_0047932d(extraout_ECX,fVar1 * 0.4,fVar2 * -0.5,fVar1 * 0.6,fVar2);
  fVar1 = (float)param_3 + (float)(int)param_5 * 0.5;
  local_88 = 7.097177e-39;
  uVar4 = FUN_00467ec4();
  do {
    local_88 = 1.68156e-44;
    FUN_00476237(&local_88,
                 (float)(((0xc - (int)(((ulonglong)uVar4 / 100) % 0xc)) + uVar5) % 0xc + 1) / 12.0);
    FUN_0047cda7();
    puVar6 = local_68;
    fVar2 = (float)(int)uVar5;
    if ((int)uVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar7 = fVar1;
    local_88 = (float)param_6 * 0.5 + (float)param_4;
    FUN_0047727a(local_50,fVar2 * 0.5235988,puVar6,fVar1);
    local_88 = (float)FUN_0047713c(puVar6,fVar7);
    FUN_0047d2ae(local_38);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  local_88 = 7.097455e-39;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

