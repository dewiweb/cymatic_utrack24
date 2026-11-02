// rea decompile_all
// name: FUN_004e50d3
// address: 0x4e50d3
// body: available
// range: 0x4e50d3-0x4e52fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e50d3(void)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined1 **ppuStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_2c;
  undefined4 *local_28;
  undefined1 *puStack_24;
  undefined4 **ppuStack_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e2dbc;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  ppuStack_44 = (undefined1 **)0x4e510b;
  FUN_004c1613();
  uStack_40 = 0x4e5112;
  iVar3 = thunk_FUN_004c1d58();
  ppuStack_44 = (undefined1 **)0x4e511b;
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0x24) + 0xc))();
  puStack_10 = (undefined1 *)0x0;
  ppuVar1 = (undefined4 **)(in_ECX + 0x2f);
  local_28 = puVar4;
  ppuStack_20 = ppuVar1;
  if (*ppuVar1 != (undefined4 *)0x0) {
    ppuStack_44 = (undefined1 **)0x4e513f;
    FUN_004bf53c();
    ppuStack_44 = (undefined1 **)0x4e514a;
    FUN_004e5c67();
    ppuStack_44 = (undefined1 **)(*ppuVar1)[0x27];
    puStack_24 = (undefined1 *)&ppuStack_44;
    FUN_004e5ca0();
    ppuStack_44 = &puStack_24;
    uVar5 = (**(code **)((*ppuVar1)[0x1c] + 4))();
    local_14 = (void *)CONCAT31(local_14._1_3_,1);
    (**(code **)(puVar4[0x1c] + 8))(uVar5);
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    ppuStack_44 = (undefined1 **)0x4e5190;
    FUN_004652d6();
    ppuStack_44 = &puStack_24;
    uVar5 = FUN_004e5b73(*ppuVar1);
    ppuStack_44 = (undefined1 **)0x0;
    puStack_10._0_1_ = 2;
    FUN_004e5a95(uVar5);
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    ppuStack_44 = (undefined1 **)0x4e51b6;
    FUN_004652d6();
    in_ECX = piStack_2c;
  }
  if (ppuVar1 != &local_28) {
    puVar2 = *ppuVar1;
    *ppuVar1 = puVar4;
    puVar4 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      ppuStack_44 = (undefined1 **)0x1;
      (**(code **)*puVar2)();
    }
  }
  puStack_10 = (undefined1 *)0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    ppuStack_44 = (undefined1 **)0x1;
    (**(code **)*puVar4)();
  }
  ppuStack_44 = (undefined1 **)0xffffffff;
  FUN_004c1064();
  ppuStack_44 = (undefined1 **)0x4e51f9;
  FUN_004bf53c();
  ppuStack_44 = (undefined1 **)0x4e5206;
  FUN_004c2ddc();
  ppuStack_44 = (undefined1 **)0x4e5210;
  FUN_004e6464();
  ppuStack_44 = (undefined1 **)0x0;
  FUN_004c2212(in_ECX);
  puStack_24 = (undefined1 *)&ppuStack_44;
  FUN_004d076d();
  FUN_004c1eee(0x1000280);
  puStack_24 = (undefined1 *)&ppuStack_44;
  FUN_004c1e29(&ppuStack_44,0x1000a00,0);
  FUN_004c1eee(0x1000281);
  ppuStack_20 = &ppuStack_44;
  FUN_004c1e29(&ppuStack_44,0x1000a00,0);
  FUN_004c1eee(0x1000201);
  ppuStack_20 = &ppuStack_44;
  FUN_004d076d();
  FUN_004c1eee(0x1000200);
  ppuStack_20 = &ppuStack_44;
  FUN_004c1e29(&ppuStack_44,0x1000202,0);
  FUN_004c1eee(0x1000202);
  ppuStack_20 = &ppuStack_44;
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  ppuStack_44 = (undefined1 **)0x4e52ea;
  (**(code **)(*piStack_2c + 0x84))();
  ExceptionList = pvStack_18;
  return;
}

